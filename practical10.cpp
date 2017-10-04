#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

#define length 100

#ifdef __linux__
const char* clr="clear";
#else
const char* clr="cls";
#endif

void inputArray(int*,int);
void printEven(int*,int);
void printOdd(int*,int);
void sumAndAverage(int*,int);
void maxAndMin(int*,int);
void removeDuplicates(int*,int&);
void printReverse(int*,int);

int main()
{
    int arr[length];
    int noOfElements;
    int choice=1;
    cout<<"Enter no of Elements you want to enter in array: ";
    cin>>noOfElements;
    inputArray(arr,noOfElements);
    do
    {
	system(clr);
        cout<<"entered array is: {";
        for(int i=0;i<noOfElements;i++)
            cout<<arr[i]<<',';
        cout<<"\b}"<<endl;
        cout<<"Operation on array"<<endl;
        cout<<"1. Print the even-valued elements."<<endl;
        cout<<"2. Print the odd-valued elements."<<endl;
        cout<<"3. Calculate and print the sum and average of the elements of array."<<endl;
        cout<<"4. Print the maximum and minimum element of array."<<endl;
        cout<<"5. Remove the duplicates from the array."<<endl;
        cout<<"6. Print the array in reverse order."<<endl;
        cout<<"Enter 0 to exit."<<endl;
        cout<<"enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 0:
            break;
        case 1:
            printEven(arr,noOfElements);
            break;
        case 2:
            printOdd(arr,noOfElements);
            break;
        case 3:
            sumAndAverage(arr,noOfElements);
            break;
        case 4:
            maxAndMin(arr,noOfElements);
            break;
        case 5:
            removeDuplicates(arr,noOfElements);
            break;
        case 6:
            printReverse(arr,noOfElements);
            break;
        default:
            cout<<"Error wrong choice try again..."<<endl;
        }
	cout<<"Press enter to continue...";
	cin.ignore();
	cin.get();
    }while(choice);
    return 0;
}

void inputArray(int* arr ,int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"Enter element no "<<i+1<<" :";
		cin>>arr[i];
	}
}

void printEven(int* arr,int size)
{
	cout<<"{";
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
			cout<<arr[i]<<',';
	}
	cout<<"\b}"<<endl;
}

void printOdd(int* arr,int size)
{
	cout<<"{";
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2!=0)
			cout<<arr[i]<<',';
	}
	cout<<"\b}"<<endl;
}
void sumAndAverage(int* arr,int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
		sum+=arr[i];
	cout<<"Sum: "<<sum<<endl;
	cout<<"Average: "<<static_cast<float>(sum)/size<<endl;
}

void maxAndMin(int* arr,int size)
{
	int max=arr[0],min=arr[0];
	for(int i=1;i<size;i++)
	{
		if(arr[i]<min)
			min=arr[i];
		if(arr[i]>max)
			max=arr[i];
	}
	cout<<"Maximum element is: "<<max<<endl;
	cout<<"Minimum element is: "<<min<<endl;
}

void removeDuplicates(int *arr,int &size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{	
			if(arr[i]==arr[j])
			{	
				for(int k=j;k<size-1;k++)
					arr[k]=arr[k+1];
				size--;
			}
		}
	}
	cout<<"Duplicate elements are removed successfully!!!"<<endl;
}

void printReverse(int *arr,int size)
{
	cout<<"{";
	for(int i=size-1;i>=0;i--)
		cout<<arr[i]<<',';
	cout<<"\b}"<<endl;
}
