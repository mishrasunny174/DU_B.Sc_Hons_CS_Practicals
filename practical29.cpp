#include<iostream>

using namespace std;

void sort(int* ,int);

int main()
{
	int *arr=new int[10];
	cout<<"Enter array "<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<"enter element no "<<i+1<<" : ";
		cin>>arr[i];
	}
	sort(arr,10);
	cout<<"Ascending order array: {";
	for(int i=0;i<10;i++)
		cout<<arr[i]<<',';
	cout<<"\b}"<<endl;
	cout<<"descending order array: {";
	for(int i=9;i>=0;i--)
		cout<<arr[i]<<',';
	cout<<"\b}"<<endl;
	return 0;
}

void sort(int* arr,int size)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
