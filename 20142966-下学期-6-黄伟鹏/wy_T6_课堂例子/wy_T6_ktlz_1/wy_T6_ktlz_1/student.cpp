#include "student.h"

student::student(void)
{
}

student::~student(void)
{
}

void student::setValues(int n,string str,char c)
{
	num=n;
	name=str; 
	sex=c;
}
void student::display()
{
   cout<<num<<" "<<name<<" "<<sex<<endl;
}
