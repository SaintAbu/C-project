#include "point.h"
#include <iostream>
#include <cmath>

using namespace std;

void main()
{
	point D;

	float j,x1,y1,z1;

	D.input();

	D.output();

	x1=D.r_x();
	y1=D.r_y();
	z1=D.r_z();

	j=sqrt(x1*x1+y1*y1+z1*z1);

	cout<<"点到原点的距离为："<<j<<"。"<<endl;
}