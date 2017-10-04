#include <iostream>

using namespace std;

#define swap(a,b)int c=a;a=b;b=c;

int main()
{
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    swap(num1,num2);
    cout<<"numbers after swapping are: "<<num1<<" and "<<num2<<endl;
    cin.ignore();
    cin.get();
    return 0;
}
