#include<iostream>
#include "fushu.h"
using namespace std;

fushu::fushu(void)
{
}


fushu::~fushu(void)
{
}
void fushu::fushujia(double x,double y,double j,double k)
{
	x1=x;
	y1=y;
	x2=j;
	y2=k;
	a=x1+x2;
	b=y1+y2;
	cout<<"两个复数相加为："<<endl;
	if(b>0)
	{
		cout<<a<<"+"<<b<<"i"<<endl;
	}
	else
	{
		cout<<a<<b<<"i"<<endl;
	}
}
void fushu::fushujian(double x,double y,double j,double k)
{
	x1=x;
	y1=y;
	x2=j;
	y2=k;
	a=x1-x2;
	b=y1-y2;
	cout<<"两个复数相减为："<<endl;
	if(b>0)
	{
		cout<<a<<"+"<<b<<"i"<<endl;
	}
	else
	{
		cout<<a<<b<<"i"<<endl;
	}
}
void fushu::fushucheng(double x,double y,double j,double k)
{
	x1=x;
	y1=y;
	x2=j;
	y2=k;
	a=x1*x2-y1*y2;
	b=x1*y2+x2*y1;
	if(b>0)
	{
		cout<<a<<"+"<<b<<"i"<<endl;
	}
	else
	{
		cout<<a<<b<<"i"<<endl;
	}
}
void fushu::fushuchu(double x,double y,double j,double k)
{
	x1=x;
	y1=y;
	x2=j;
	y2=k;
	a=(x1*x2+y1*y2)/(x2*x2+y2*y2);
	b=(y1*x1-x1*y2)/(x2*x2+y2*y2);
	if(b>0)
	{
		cout<<a<<"+"<<b<<"i"<<endl;
	}
	else
	{
		cout<<a<<b<<"i"<<endl;
	}
}
