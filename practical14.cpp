#include<iostream>

using namespace std;

#define PI 3.14

void calcAreaAndCircum(float,float*,float*);
int main()
{
	float radius,circum,area;
	cout<<"enter radius: ";
	cin>>radius;
	calcAreaAndCircum(radius,&circum,&area);
	cout<<"circumference: "<<circum<<endl;
	cout<<"area: "<<area<<endl;
	return 0;
}

void calcAreaAndCircum(float radius,float* circum,float* area)
{
	*area=PI*radius*radius;
	*circum=2*PI*radius;
}
