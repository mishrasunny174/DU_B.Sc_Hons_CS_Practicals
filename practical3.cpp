/** practical no 3
 *  Q:  WAP to compute the sum of the first n terms of the following series S = 1+1/2+1/3+1/4+……
 */

#include <iostream>

using namespace std;

int main()
{
    double sum=0;
    int n;
    cout<<"Enter no of terms for the sum: ";
    cin>>n;
    for(int i=1;i<=n;i++)
        sum+=1.0/i;
    cout<<"sum of the series is: "<<sum<<endl;
    cin.ignore();
    cin.get();
    return 0;
}
