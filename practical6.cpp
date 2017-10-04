#include <iostream>
#include <math.h>

using namespace std;

int isPrime(int);

int main()
{
    cout<<"Prime numbers up-to 100 are {";
    for(int i=1;i<=100;i++)
        if(isPrime(i))
            cout<<i<<',';
    cout<<"\b}"<<endl;
    cin.get();
    return 0;
}

int isPrime(int num)
{
    for(int i=2;i<num/2;i++)
        if(num%i==0)
            return 0;
    return 1;
}
