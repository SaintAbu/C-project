#include<iostream>
#include "Time.h"
using namespace std;


Time::Time(void)
{
}


Time::~Time(void)
{
}
void Time::sethour(int h)
{
	h1=h;
}
void Time::setminute(int m)
{
	m1=m;
}
void Time::setsecond(int s)
{
	s1=s;
}
void Time::showtime12()
{
	
	if(h1>=12)
	{
		h2=h1-12;
		cout<<"12小时制显示为:"<<h2<<";"<<m1<<":"<<s1<<endl;
	}
	else
	{	cout<<"12小时制显示为:"<<h1<<";"<<m1<<":"<<s1<<endl;
	}}
void Time::showtime24()
{

	cout<<"24小时制显示为:"<<h1<<":"<<m1<<":"<<s1;
}