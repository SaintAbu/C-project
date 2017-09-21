#include "student.h"

student::student(void)
{
}

void student::set_s(string n,int c,int I)
{
	name=n;
	cla=c;
	ID=I;
}

void student::show_s()
{
	cout<<"助教既是学生，姓名："<<name<<"班级："<<cla<<"学号："<<ID<<"，需要上课。"<<endl;
}
student::~student(void)
{
}