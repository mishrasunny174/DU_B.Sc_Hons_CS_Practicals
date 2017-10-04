/**
 * A menu driven program to perform following operations on strings:
 * a) Show address of each character in string 
 * b) Concatenate two strings without using strcat function. 
 * c) Concatenate two strings using strcat function. 
 * d) Compare two strings 
 * e) Calculate length of the string (use pointers) 
 * f) Convert all lowercase characters to uppercase 
 * g) Convert all uppercase characters to lowercase 
 * h) Calculate number of vowels 
 * i) Reverse the string
 */

#include<iostream>
#include<cstring>
#include<cctype>
#include<cstdlib>

using namespace std;

#ifdef __linux__ //making code environment independent
const char* clr="clear";
#else
const char* clr="cls";
#endif


void showAddr();
void concatWithoutStrcat();
void concatWithStrcat();
void compareTwoString();
void calcLength();
void convertUpperToLower();
void convertLowerToUpper();
void reverseStr();
void calcVowel();


int main()
{
	int choice;
	do
	{
		system(clr);
		cout<<" String Operations"<<endl;
		cout<<"1. Show address of each character in string"<<endl;
		cout<<"2. Concatenate two strings without using strcat function"<<endl;
		cout<<"3. Concatenate two strings using strcat function"<<endl;
		cout<<"4. Compare two strings"<<endl;
		cout<<"5. Calculate length of the string (use pointers)"<<endl;
		cout<<"6. Convert all uppercase characters to lowercase"<<endl;
		cout<<"7. Convert all lowercase letters to uppercase"<<endl;
		cout<<"8. Calculate no of vowels"<<endl;
		cout<<"9. Reverse the string"<<endl;
		cout<<"Enter 0 to exit..."<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice)
		{
		case 0:
			break;
		case 1:
			showAddr();
			break;
		case 2:
			concatWithoutStrcat();
			break;
		case 3:
			concatWithStrcat();
			break;
		case 4:
			compareTwoString();
			break;
		case 5:
			calcLength();
			break;
		case 6:
			convertUpperToLower();
			break;
		case 7:
			convertLowerToUpper();
			break;
		case 8:
			reverseStr();
			break;
		case 9:
			calcVowel();
			break;
		default:
			cout<<"Wrong choice try again..."<<endl;
		}
	cout<<"Press enter to continue..."<<endl;
	cin.ignore();
	cin.get();
	}while(choice!=0);
}

void showAddr()
{
	char str[100],*cptr;
	cout<<"Enter a string: ";
	cin.getline(str,100);
	cptr=str;
	while(*cptr!='\0')
		cout<<*cptr<<" is at "<<reinterpret_cast<int*>(cptr)<<endl;

}

void concatWithoutStrcat()
{
	char str1[100],str2[100],str3[200];
	char *cptr1=str1,*cptr2=str2,*cptr3=str3;
	cout<<"Enter first string: ";
	cin.getline(str1,100);
	cout<<"Enter second string: ";
	cin.getline(str2,100);
	while(*cptr1!='\0')
	{
		*cptr3=*cptr1;
		cptr1++;
		cptr3++;
	}
	while(*cptr2!='\0')
	{
		*cptr3=*cptr2;
		cptr2++;
		cptr3++;
	}
	cout<<"concated string is: "<<str3<<endl;
}

void concatWithStrcat()
{
	char str1[200],str2[100];
	cout<<"Enter first string: ";
	cin.getline(str1,100);
	cout<<"Enter second string: ";
	cin.getline(str2,100);
	strcat(str1,str2);
	cout<<"Concatenated string is: "<<str1<<endl;
}

void compareTwoString()
{
	char str1[200],str2[100];
	cout<<"Enter first string: ";
	cin.getline(str1,100);
	cout<<"Enter second string: ";
	cin.getline(str2,100);
	if(strcmp(str1,str2)==0)
		cout<<"Two String are same!"<<endl;
	else
		cout<<"String are not same!"<<endl;
}

void calcLength()
{
	char str[100],*cptr;
	int length=0;
	cout<<"Enter A String: ";
	cin.getline(str,100);
	cptr=str;
	while(*cptr++!='\0')
		length++;
	cout<<"Length of string is "<<length<<endl;
}

void convertUpperToLower()
{
	char str[100],*cptr;
	cout<<"Enter A String: ";
	cin.getline(str,100);
	cptr=str;
	while(*cptr++!='\0')
		*cptr=tolower(*cptr);
	cout<<"Lower Case string is: "<<str<<endl;
}

void convertLowerToUpper()
{
	char str[100],*cptr;
	cout<<"Enter A String: ";
	cin.getline(str,100);
	cptr=str;
	while(*cptr++!='\0')
		*cptr=toupper(*cptr);
	cout<<"Upper Case string is: "<<str<<endl;
}

void reverseStr()
{
	char str[100],strrev[100],*cptr;
	cout<<"Enter A String: ";
	cin.getline(str,100);
	for(int i=strlen(str)-1;i>=0;i--)
	{
		*cptr=str[i];
		cptr++;
	}
	*cptr='\0';
	cout<<"Reverse string is: "<<str<<endl;
}

void calcVowel()
{
	char str[100],*cptr;
	int count=0;
	cout<<"Enter A String: ";
	cin.getline(str,100);
	cptr=str;
	while(*cptr!='\0')
	{
		switch(*cptr)
		{
		case 'a':
		case 'e':
		case 'u':
		case 'i':
		case 'o':
			count++;
		}
	}
	cout<<"No of Vowels are: "<<count<<endl;
}
