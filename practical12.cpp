#include<iostream>

using namespace std;

void swap(int*,int*);

int main()
{
	int first,second;
	cout<<"enter two numbers: ";
	cin>>first>>second;
	swap(&first,&second);
	cout<<"Numbers after swapping are: "<<first<<" "<<second<<endl;
	return 0;
}

void swap(int* first,int* second) //this function swaps two numbers
{
	int temp=*first;
	*first=*second;
	*second=temp;
}
