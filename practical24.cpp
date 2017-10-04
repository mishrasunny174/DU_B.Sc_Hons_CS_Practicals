#include<iostream>

using namespace std;

class Box
{
	float length;
	float breadth;
	float height;
public:
	Box(){}
	Box(float,float,float);
	~Box(){}
	float calculateSurfaceArea();
	float calculateVolume();
	Box operator++(); //prefix
	Box operator++(int dummy); //postfix
	Box operator--(); //prefix
	Box operator--(int dummy);  //postfix
	Box operator=(Box);
	friend bool operator==(Box,Box);
	bool isCube();
	bool isCuboid();
	void display();
};

bool operator==(Box,Box);

int main()
{
	Box A(12,13,15),B;
	B=A++;
	B.display();
	B=A--;
	B.display();
	B=++A;
	B.display();
	B=--A;
	B.display();
	return 0;
}


Box::Box(float l,float b,float h):length(l),breadth(b),height(h){}

float Box::calculateSurfaceArea()
{
	return 2*(length*breadth + breadth*height + height*length );
}

float Box::calculateVolume()
{
	return length*breadth*height;
}

Box Box::operator++() //prefix
{
	this->length++;
	this->breadth++;
	this->height++;
	return *this;
}

Box Box::operator++(int dummy) //postfix
{
	Box temp=*this;
	this->height++;
	this->breadth++;
	this->length++;
	return temp;
}

Box Box::operator--() //prefix
{
	this->length--;
	this->breadth--;
	this->height--;
	return *this;
}

Box Box::operator--(int dummy) //postfix
{
	Box temp=*this;
	this->height--;
	this->breadth--;
	this->length--;
	return temp;
}

Box Box::operator=(Box temp)
{
	this->length=temp.length;
	this->breadth=temp.breadth;
	this->height=temp.height;
	return *this;
}

bool operator==(Box A,Box B)
{
	if(A.length==B.length||A.breadth==B.breadth||A.height==B.height)
		return true;
	else
		return false;
}

bool Box::isCube()
{
	if(this->length==this->breadth&&this->length==this->height)
		return true;
	else
		return false;
}

bool Box::isCuboid()
{
	if(!this->isCube())
		return true;
	else
		return false;
}

void Box::display()
{
	cout<<"length: "<<length<<endl;
	cout<<"breadth: "<<breadth<<endl;
	cout<<"height: "<<height<<endl;
}
