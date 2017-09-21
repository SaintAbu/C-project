#include<iostream>
#include "point.h"
using namespace std;
int main()
{
	double x;
	double y;
	double z;
	cout<<"请输入点的坐标："<<endl;
	cin>>x>>y>>z;
	point q;
	q.setx(x);
	q.sety(y);
	q.setz(z);
	q.output();
	return 0;
}