#include<iostream>
#include "point.h"
using namespace std;

point::point(void)
{
}


point::~point(void)
{
}
void point::setx(double x)
{
	x1=x;
}
void point::sety(double y)
{
	y1=y;
}
void point::setz(double z)
{
	z1=z;
}
void point::output()
{
	cout<<"("<<x1<<","<<y1<<","<<z1<<")"<<endl;
}
