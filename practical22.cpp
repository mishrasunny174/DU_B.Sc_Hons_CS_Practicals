#include<iostream>
#include<cstring>

using namespace std;

class Person
{
	char name[25];
	int age;
	char sex;
public:
	Person();
	virtual void introduceYourself();
};

class Student:public Person
{
	char profession[25];
public:
	Student();
	void introduceYourself();
};

class Teacher:public Person
{
	char profession[25];
public:
	Teacher();
	void introduceYourself();
};

int main()
{
	Person *personPtr;
	cout<<"Enter Student information "<<endl;
	Student stu;
	cout<<"Enter teacher information "<<endl;
	Teacher teach;
	personPtr=reinterpret_cast<Person*>(&stu);
	personPtr->introduceYourself();
	personPtr=reinterpret_cast<Person*>(&teach);
	personPtr->introduceYourself();
	cout<<"Press enter key to continue..."<<endl;
	cin.get();
	return 0;
}

Person::Person()
{
	cout<<"Tell me Your name: ";
	cin.getline(name,25);
	cout<<"Enter you age: ";
	cin>>age;
	cout<<"Enter your sex (M/F): ";
	cin.ignore();
	cin.get(sex);
	cin.ignore();
}

void Person::introduceYourself()
{
	cout<<"name: "<<name<<endl;
	cout<<"Age: "<<age<<endl;
	cout<<"Sex: "<<sex<<endl;
}

Student::Student()
{
	strcpy(profession,"student");
}

void Student::introduceYourself()
{
	Person::introduceYourself();
	cout<<"Profession: "<<profession<<endl;
}

Teacher::Teacher()
{
	strcpy(profession,"teacher");
}

void Teacher::introduceYourself()
{
	Person::introduceYourself();
	cout<<"Profession: "<<profession<<endl;
}
