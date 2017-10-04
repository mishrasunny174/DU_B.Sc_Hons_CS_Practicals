/** practical no 2
 *  Q:WAP to reverse a number
 */

#include <iostream>

using namespace std;

int main()
{
    int num,rev=0;
    cout<<"enter a number: ";
    cin>>num;
    while(num)
    {
        rev*=10;
        rev+=num%10;
        num/=10;
    }
    cout<<"reversed number is: "<<rev<<endl;
    cin.ignore();
    cin.get();
    return 0;
}
