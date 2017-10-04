#include<iostream>

using namespace std;

long unsigned int fibonacciLoop(int n);
long unsigned int fibonacciRecur(int n);

int main()
{
	int n;
	cout<<"Enter element no of Fibonacci to find: ";
	cin>>n;
	cout<<"using loop: "<<fibonacciLoop(n)<<endl;
	cout<<"using recursion: "<<fibonacciRecur(n)<<endl;
	cout<<"Press Enter to continue..."<<endl;
	cin.ignore();
	cin.get();
	return 0;
}

long unsigned int fibonacciLoop(int n)
{
	long unsigned int prev1=1,prev2=0,fibonacci=0;
	if(n==0)
		return 0;
	for(int i=1;i<=n;i++)
	{
		prev2=prev1;
		prev1=fibonacci;
		fibonacci=prev1+prev2;
	}
	return fibonacci;
}

long unsigned int fibonacciRecur(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fibonacciRecur(n-1)+fibonacciRecur(n-2);
}
