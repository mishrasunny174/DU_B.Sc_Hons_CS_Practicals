#include<iostream>

using namespace std;

void change(int*,int*);

int main()
{
	int first,second;
	cout<<"enter two numbers: ";
	cin>>first>>second;
	change(&first,&second);
	cout<<"Numbers after swapping are: "<<first<<" "<<second<<endl;
	return 0;
}

void change(int* first,int* second)
{
	*first=*second*10;
	*second=10;
}
