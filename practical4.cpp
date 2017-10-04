#include <iostream>

using namespace std;

int main()
{
    int sum=0,n;
    cout<<"Enter no of terms for the sum: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            sum-=i;
        else
            sum+=i;
    }
    cout<<"sum of the series is: "<<sum<<endl;
    return 0;
}
