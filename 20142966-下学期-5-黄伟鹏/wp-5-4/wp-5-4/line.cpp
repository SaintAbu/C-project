#include "line.h"
#include "point.h"
#include<iostream>
#include<cmath>
using namespace std;

line::line(void)
{
}

line::~line(void)
{
}
void line::output(point j, point k)
{
	q=j;
	w=k;
	float d;
	d=sqrt((q.x-w.x)*(q.x-w.x)+(q.y-w.y)*(q.y-w.y)+(q.z-w.z)*(q.z-w.z));

    cout<<"线段长度为："<<d<<endl;
}
