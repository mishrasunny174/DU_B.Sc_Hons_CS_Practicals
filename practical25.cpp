#include<iostream>
#include<fstream>

using namespace std;

struct student
{
	int rollNo;
	int clas;
	int totalMarks;
	int year;
	char name[25];
};

int main()
{
	student stu[10];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter roll no: ";
		cin>>stu[i].rollNo;
		cout<<"enter class: ";
		cin>>stu[i].clas;
		cout<<"enter name: ";
		cin.ignore();
		cin.getline(stu[i].name,25);
		cout<<"enter year: ";
		cin>>stu[i].year;
		cout<<"enter total marks: ";
		cin>>stu[i].totalMarks;
	}
	ofstream oFile("student.dat",ios::out|ios::binary);
	if(oFile)
	{
		for(int i=0;i<5;i++)
			oFile.write(reinterpret_cast<char*>(&stu[i]),sizeof(student));
	}
	oFile.close();
	return 0;
}
