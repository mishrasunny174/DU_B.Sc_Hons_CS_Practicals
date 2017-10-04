#include <iostream>
#include <cstdlib>

using namespace std;

#ifdef __linux__
const char* clr="clear";
#else
const char* clr="cls";
#endif

template<class MatrixType>
class Matrix
{
    public:
        Matrix();
        Matrix(int,int);
        void transpose();
        virtual ~Matrix();
        Matrix<MatrixType> operator+(Matrix<MatrixType>);
        Matrix<MatrixType> operator-(Matrix<MatrixType>);
	void operator=(Matrix<MatrixType>);
        Matrix<MatrixType> operator*(Matrix<MatrixType>);
        void disp(); 
	void getMatrix();
    private:
        MatrixType matrix[10][10];
        int m,n;
};

void add();
void sub();
void product();
void transpose();

int main()
{
    int choice=1;
    do
    {
        system(clr);
        cout<<"Matrix Operations"<<endl;
        cout<<"1. Adding Two Matrices."<<endl;
        cout<<"2. Subtracting Two Matrices."<<endl;
        cout<<"3. Product of Two Matrices."<<endl;
        cout<<"4. Transpose of a Matrix."<<endl;
        cout<<"Enter 0 to exit..."<<endl;
        cout<<"enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 0:
            break;
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            product();
            break;
        case 4:
            transpose();
            break;
        default:
            cout<<"wrong choice please try again..."<<endl;
        }
    cout<<"press enter to continue..."<<endl;
    cin.ignore();
    cin.get();
    }while(choice!=0);
    return 0;
}

void add()
{
    system(clr);
    Matrix<int> A(3,3),B(3,3),C(3,3);
    cout<<"Matrix A"<<endl;
    A.getMatrix();
    cout<<"Matrix B"<<endl;
    B.getMatrix();
    cout<<"Result: "<<endl;
    C=A+B;
    C.disp();
}

void sub()
{
    system(clr);
    Matrix<int> A(3,3),B(3,3),C(3,3);
    cout<<"Matrix A"<<endl;
    A.getMatrix();
    cout<<"Matrix B"<<endl;
    B.getMatrix();
    cout<<"Result: "<<endl;
    C=A-B;
    C.disp();
}

void product()
{
    system(clr);
    Matrix<int> A(3,3),B(3,3),C(3,3);
    cout<<"Matrix A"<<endl;
    A.getMatrix();
    cout<<"Matrix B"<<endl;
    B.getMatrix();
    cout<<"Result: "<<endl;
    C=A*B;
    C.disp();
}

void transpose()
{
    system(clr);
    Matrix<int> A(3,3);
    cout<<"Matrix A"<<endl;
    A.getMatrix();
    system("clear");
    cout<<"Result: "<<endl;
    A.transpose();
    A.disp();
}

template<class MatrixType>
Matrix<MatrixType>::Matrix(){}

template<class MatrixType>
Matrix<MatrixType>::Matrix(int i,int j):m(i),n(j)
{
    for(int i=0;i<this->m;i++)
    {
        for(int j=0;j<this->n;j++)
        {
            matrix[i][j]=0;
        }
    }
}
template<class MatrixType>
Matrix<MatrixType>::~Matrix(){}

template<class MatrixType>
void Matrix<MatrixType>::transpose()
{
    try
    {
        if(this->m!=this->n)
            throw 3;
	Matrix<MatrixType> temp=*this;
	for(int i=0;i<this->m;i++)
        {
            for(int j=0;j<this->n;j++)
            {
		    this->matrix[i][j]=temp.matrix[j][i];
            }
        }
    }
    catch(int excep)
    {
        cout<<"ERROR "<<excep<<" i.e, Matrix is not square matrix."<<endl;
        exit(excep);
    }
}

template<class MatrixType>
void Matrix<MatrixType>::operator=(Matrix<MatrixType> M)
{
	this->m=M.m;
	this->n=M.n;
	for(int i=0;i<this->m;i++)
	{
		for(int j=0;j<this->n;j++)
		{
			this->matrix[i][j]=M.matrix[i][j];
		}
	}
}

template<class MatrixType>
Matrix<MatrixType> Matrix<MatrixType>::operator+(Matrix<MatrixType> M)
{
    try
    {
        if((this->m!=M.m)||(this->n!=M.n))
            throw 1;
        Matrix<MatrixType> temp(this->m,this->n);
        for(int i=0;i<temp.m;i++)
        {
            for(int j=0;j<temp.n;j++)
            {
                temp.matrix[i][j]=this->matrix[i][j]+M.matrix[i][j];
            }
        }
        return temp;
    }
    catch(int excep)
    {
        cout<<"ERROR "<<excep<<" i.e, Matrix are not of same size!!!"<<endl;
        exit(excep);
    }
}

template<class MatrixType>
Matrix<MatrixType> Matrix<MatrixType>::operator-(Matrix<MatrixType> M)
{
    try
    {
        if((this->m!=M.m)||(this->n!=M.n))
            throw 1;
        Matrix temp(this->m,this->n);
        for(int i=0;i<temp.m;i++)
        {
            for(int j=0;j<temp.n;j++)
            {
                temp.matrix[i][j]=this->matrix[i][j]-M.matrix[i][j];
            }
        }
        return temp;
    }
    catch(int excep)
    {
        cout<<"ERROR "<<excep<<" i.e, Matrix are not of same size!!!"<<endl;
        exit(excep);
    }
}

template<class MatrixType>
Matrix<MatrixType> Matrix<MatrixType>::operator*(Matrix<MatrixType> M)
{
    try
    {
        if(this->m!=M.n)
            throw 2;
        Matrix<MatrixType> temp(this->m,M.n);
        for(int i=0;i<temp.m;i++)
        {
            for(int j=0;j<temp.n;j++)
            {
                temp.matrix[i][j]=0;
                for(int k=0;k<temp.m;k++)
                    temp.matrix[i][j]+=this->matrix[i][k]*M.matrix[k][j];
            }
        }
        return temp;
    }
    catch(int excep)
    {
        cout<<"ERROR "<<excep<<" i.e, Matrix is not multiply-able!!!"<<endl;
        exit(excep);
    }
}

template<class MatrixType>
void Matrix<MatrixType>::disp()
{
	for(int i=0;i<this->m;i++)
	{
		for(int j=0;j<this->n;j++)
		{
			if(j==0)
				cout<<" ";
			else
				cout<<"\t";
			cout<<this->matrix[i][j];
			
		}
		cout<<endl;
	}
}

template<class MatrixType>
void Matrix<MatrixType>::getMatrix()
{
	for(int i=0;i<this->m;i++)
	{
		cout<<"Enter row no "<<i+1<<" having "<<this->n<<" elements: ";
		for(int j=0;j<this->n;j++)
			cin>>this->matrix[i][j];
	}
}

