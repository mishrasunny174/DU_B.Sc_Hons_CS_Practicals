#include<iostream>

using namespace std;

struct arr
{
	int array[100];
	int size;
};

void reverseArr(arr*);

int main()
{
	arr* ar=new arr;
	cout<<"Enter no of elements of array: ";
	cin>>ar->size;
	for(int i=0;i<ar->size;i++)
	{
		cout<<"enter element no "<<i+1<<" : ";
		cin>>ar->array[i];
	}
	cout<<"Entered array is {";
	for(int i=0;i<ar->size;i++)
		cout<<ar->array[i]<<",";
	cout<<"\b}"<<endl;
	reverseArr(ar);
	cout<<"reversed array is {";
	for(int i=0;i<ar->size;i++)
		cout<<ar->array[i]<<",";
	cout<<"\b}"<<endl;
	return 0;
}

void reverseArr(arr* ar)
{
	int temp;
	for(int i=0,j=ar->size-1;i<j;i++,j--)
	{
		temp=ar->array[i];
		ar->array[i]=ar->array[j];
		ar->array[j]=temp;
	}
}
