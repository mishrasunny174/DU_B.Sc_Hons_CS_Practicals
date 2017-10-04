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
	student stu;
	ifstream iFile("student.dat",ios::in|ios::binary);
	if(iFile)
	{
		while(iFile.read(reinterpret_cast<char*>(&stu),sizeof(student)))
			cout<<stu.rollNo<<" "<<stu.name<<" "<<stu.totalMarks<<endl;
		iFile.close();
	}
	else
	{
		cout<<"error while opening file."<<endl;
	}
	return 0;
}
