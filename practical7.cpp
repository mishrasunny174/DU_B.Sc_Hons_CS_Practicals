#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"enter a number: ";
    cin>>num;
    cout<<"Factors of the given number are: {";
    for(int i=1;i<=num;i++)
        if(num%i==0)
            cout<<i<<',';
    cout<<"\b}"<<endl;
    cin.ignore();
    cin.get();
    return 0;
}
