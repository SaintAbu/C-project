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
	cout<<"ÄêÁä£º"<<age<<"£¬ÐÕÃû£º"<<name<<"¡£"<<endl;
}

people::~people(void)
{
}