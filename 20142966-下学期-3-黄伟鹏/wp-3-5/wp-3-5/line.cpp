#include "line.h"
#include <iostream>
#include <cmath>

using namespace std;

line::line(void)
{
}

line::~line(void)
{
}

void line::input()
{
	cout<<"�����һ�������x��y��z��"<<endl;
	cin>>x1>>y1>>z1;

	cout<<"����ڶ��������x��y��z��"<<endl;
	cin>>x2>>y2>>z2;
}

float line::c()
{
	float C;
	C=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));

	return C;
}

void line::output()
{
	float C1;

	C1=c();

	cout<<"�߶���㣺��"<<x1<<","<<y1<<","<<z1<<")"<<endl;
	cout<<"�߶���㣺��"<<x2<<","<<y2<<","<<z2<<")"<<endl;

	cout<<"�߶γ��ȣ�"<<C1<<"��"<<endl;
}