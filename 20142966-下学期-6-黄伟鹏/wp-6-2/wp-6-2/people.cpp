#include "people.h"

people::people(void)
{
}

void people::set_an(int a,string n)
{
	age=a;
	name=n;
}

void people::display()
{
	cout<<"���䣺"<<age<<"��������"<<name<<"��"<<endl;
}

people::~people(void)
{
}