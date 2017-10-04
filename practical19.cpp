#include<iostream>

using namespace std;

long unsigned int factLoop(int num);
long unsigned int factRecur(int num);

int main()
{
	int num;
	cout<<"Enter number to find factorial of: ";
	cin>>num;
	cout<<"Using loop: "<<factLoop(num)<<endl;
	cout<<"Using recursion: "<<factRecur(num)<<endl;
	cout<<"Press enter to continue..."<<endl;
	cin.ignore();
	cin.get();
	return 0;
}

long unsigned int factLoop(int num)
{
	long unsigned int fact=1;
	while(num)
	{
		fact*=num;
		num--;
	}
	return fact;
}

long unsigned int factRecur(int num)
{
	if(num==1)
		return 1;
	else
		return num*factRecur(num-1);
}
