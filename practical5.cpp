#include <iostream>
#include <string.h>

using namespace std;

int isPalindrome(char*);

int main()
{
    char str[100];
    cout<<"Enter a string: ";
    cin.get(str,100);
    if(isPalindrome(str))
        cout<<"Entered string is palindrome"<<endl;
    else
        cout<<"Entered string is not palindrome"<<endl;
    return 0;
}

int isPalindrome(char* str)
{
    for(int i=0,j=strlen(str)-1;i<j;i++,j--)
        if(str[i]==str[j])
            return 1;
    return 0;
}
