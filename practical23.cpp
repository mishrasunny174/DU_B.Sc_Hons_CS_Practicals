#include<iostream>
#include<cmath>

enum triangleType{ Equal,Iso,Right,Scaler }; //enum type for type of triangle

using namespace std;


//triangle class
class Triangle
{
	double a,b,c; //three sides of the triangle
	triangleType T;
	double calcArea(double); // overloaded functions to calculate area
	double calcArea(double,double); //based on which type of triangle is there
	double calcArea(double,double,double);
public:
	Triangle(); 
	double getArea(); //returns area of the triangle
	bool operator==(Triangle); //overloaded operator == 
	Triangle operator=(Triangle); // overloaded operator =
};

int main()
{
	Triangle T;
	cout<<"area of the trianle is: "<<T.getArea()<<endl;
	return 0;
}

Triangle Triangle::operator=(Triangle temp)
{
	this->a=temp.a;
	this->b=temp.b;
	this->c=temp.c;
}

bool Triangle::operator==(Triangle temp)
{
	if(this->a==temp.a&&this->b==temp.b&&this->c==temp.c)
		return true;
	else
		return false;
}

double Triangle::getArea()
{
	double area;
	switch(T)
	{
		case Equal:
			area=calcArea(a);
			break;
		case Right:
			area=calcArea(a,b);
			break;
		case Iso:
		case Scaler:	
			area=calcArea(a,b,c);
	}
	return area;
}

double Triangle::calcArea(double temp) //for equilateral triangle
{
	return (sqrt(3)/4)*a*a; 
}

double Triangle::calcArea(double temp1,double temp2) //for right triangle
{
	return (1.0/2)*temp1*temp2;
}

double Triangle::calcArea(double temp1,double temp2,double temp3)
{
	double s=(temp1+temp2+temp3)/2;
	return sqrt(s*(s-temp1)*(s-temp2)*(s-temp3));
}

Triangle::Triangle()
{
	int choice;
	do //loop to get Triangle type
	{
		cout<<"Enter Triangle Type"<<endl;
		cout<<"1- Equilateral"<<endl;
		cout<<"2- Isosceles"<<endl;
		cout<<"3- Right angled"<<endl;
		cout<<"4- Scaler"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				T=Equal;
				break;
			case 2:
				T=Iso;
				break;
			case 3:
				T=Right;
				break;
			case 4:
				T=Scaler;
				break;
			default:
				cout<<"Wrong Choice please try again..."<<endl;
		}
	}while(choice!=1&&choice!=2&&choice!=3&&choice!=4);

	//switch case to get sides of triangles
	switch(T)
	{
		case Equal:
			cout<<"Enter a side: ";
			cin>>a;
			b=a;
			c=a;
			break;
		case Iso:
			cout<<"Enter one of two equal sides: ";
			cin>>a;
			b=a;
			cout<<"Enter other side: ";
			cin>>c;
			break;
		case Right:
			cout<<"Enter base: ";
			cin>>a;
			cout<<"Enter height: ";
			cin>>b;
			c=sqrt(a*a+b*b);
			break;
		case Scaler:
			cout<<"Enter first side: ";
			cin>>a;
			cout<<"Enter second side: ";
			cin>>b;
			cout<<"Enter third side: ";
			cin>>c;
			break;
	}
}


