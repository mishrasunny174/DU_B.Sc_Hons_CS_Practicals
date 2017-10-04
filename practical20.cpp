#include<iostream>

using namespace std;

int gcdLoop(int,int);
int gcdRecur(int,int);

int main()
{
	int num,denum;
	cout<<"Enter two numbers: ";
	cin>>num>>denum;
	cout<<"GCD using loop: "<<gcdLoop(num,denum)<<endl;
	cout<<"GCD using recursion: "<<gcdRecur(num,denum)<<endl;
	cout<<"Press enter to continue...";
	cin.ignore();
	cin.get();
	return 0;
}

int gcdLoop(int num,int denum)
{
	int remainder=num%denum;
	while(remainder)
	{
		num=denum;
		denum=remainder;
		remainder=num%denum;
	}
	return denum;
}

int gcdRecur(int num,int denum)
{
	if(num%denum==0)
		return denum;
	else
		return gcdRecur(denum,num%denum);
}
