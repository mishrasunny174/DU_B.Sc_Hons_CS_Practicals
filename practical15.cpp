#include<iostream>

using namespace std;

int main()
{
	int noOfElements,sum;
	cout<<"Enter the no of elements you want to enter: ";
	cin>>noOfElements;
	int* arr=new int[noOfElements];
	for(int i=0;i<noOfElements;i++)
	{	
		cout<<"Enter element no "<<i+1<<" : ";
		cin>>arr[i];
	}
	for(int i=0;i<noOfElements;i++)
		sum+=arr[i];
	cout<<"Sum of entered elements is: "<<sum<<endl;
	delete[] arr;
	return 0;
}
