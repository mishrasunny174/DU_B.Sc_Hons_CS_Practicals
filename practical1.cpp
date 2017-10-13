/** practical no 1
 *  Q:WAP to print the sum and product of digits of an integer.
 */

#include <iostream>
#include <cstdlib>

// class for digits of a number
class DigitsOfNum
{
	int num;
public:
	DigitsOfNum(int);
	int getSumOfDigits(); //return sum of digits of a number
	int getProductOfDigits(); //return product of digits of a number

};

using namespace std;

int main()
{
    int num;
    cout<<"enter a number: ";
    cin>>num;
    DigitsOfNum D(num);
    cout<<"sum of the digits of number is: "<<D.getSumOfDigits()<<endl;
    cout<<"product of the digits of number is: "<<D.getProductOfDigits()<<endl;
    cin.ignore();
    cin.get();
    return 0;
}

DigitsOfNum::DigitsOfNum(int num)
{
	this->num=num;
}

int DigitsOfNum::getSumOfDigits()
{
	int sum=0,temp=this->num;
	while(temp)
    	{
        	sum+=temp%10;
        	temp/=10;
    	}
	return sum;
}

int DigitsOfNum::getProductOfDigits()
{
	int product=1,temp=this->num;
	while(temp)
	{
		product*=temp%10;
		temp/=10;
	}
	return product;
}
