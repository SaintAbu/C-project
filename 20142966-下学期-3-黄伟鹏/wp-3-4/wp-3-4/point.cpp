#include "point.h"
#include <iostream>

using namespace std;

point::point(void)
{
}

point::~point(void)
{
}

void point::input()
{
	cout<<"����һ�������x,y,z��"<<endl;
	cin>>x>>y>>z;
}

void point::output()
{
	cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}

float point::r_x()
{
	return x;
}

float point::r_y()
{
	return y;
}
float point::r_z()
{
	return z;
}
