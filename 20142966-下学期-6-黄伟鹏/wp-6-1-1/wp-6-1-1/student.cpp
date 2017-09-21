#include "student.h"

student::student(void)
{
}

student::~student(void)
{
}

void student::set(int n,string s, char c)
{
	num=n;
	name=s;
	sex=c;
}
void student::put()
{
	cout<<num<<","<<name<<","<<sex<<endl;
}