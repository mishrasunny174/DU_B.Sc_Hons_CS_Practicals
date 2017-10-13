/** practical no 1
 *  Q:WAP to print the sum and product of digits of an integer.
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num,sum=0,product=1;
    cout<<"enter a number: ";
    cin>>num;
    while(num)
    {
        sum+=num%10;
        product*=num%10;
        num/=10;
    }
    cout<<"sum of the digits of number is: "<<sum<<endl;
    cout<<"product of the digits of number is: "<<product<<endl;
    cin.ignore();
    cin.get();
    return 0;
}
