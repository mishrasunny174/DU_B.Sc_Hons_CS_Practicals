#include <iostream>

using namespace std;

int main()
{
    int noOfLines,spaces,stars=1;
    cout<<"enter no of lines: ";
    cin>>noOfLines;
    spaces=noOfLines-1;
    for(int i=0;i<noOfLines;i++)
    {
        for(int j=0;j<spaces;j++)
            cout<<' ';
        for(int j=0;j<stars;j++)
            cout<<'*';
        for(int j=0;j<spaces;j++)
            cout<<' ';
        stars+=2;
        spaces--;
        cout<<endl;
    }
    cin.ignore();
    cin.get();
    return 0;
}
