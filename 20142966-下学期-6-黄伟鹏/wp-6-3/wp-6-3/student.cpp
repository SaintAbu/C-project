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
	cout<<"���̼���ѧ����������"<<name<<"�༶��"<<cla<<"ѧ�ţ�"<<ID<<"����Ҫ�ϿΡ�"<<endl;
}
student::~student(void)
{
}