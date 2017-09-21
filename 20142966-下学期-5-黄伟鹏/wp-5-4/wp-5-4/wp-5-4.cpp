#include "line.h"
#include <iostream>
using namespace std;
void main()
{
	float x1,y1,z1,x2,y2,z2;
	cout<<"请输入起点的坐标："<<endl;
	cin>>x1>>y1>>z1;
	cout<<"请输入终点的坐标："<<endl;
	cin>>x2>>y2>>z2;
	point d1(x1,y1,z1);
	point d2(x2,y2,z2);
	line jvli;
	jvli.output(d1,d2);

}
