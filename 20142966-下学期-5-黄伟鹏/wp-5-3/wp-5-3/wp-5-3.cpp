#include<iostream>
#include "fushu.h"
using namespace std;
int main()
{
	double x;
	double y;
	double j;
	double k;
	cout<<"请分别输入两个复数的坐标："<<endl;
	cin>>x>>y>>j>>k;
	fushu q;
	q.fushujia(x,y,j,k);
	q.fushujian(x,y,j,k);
	q.fushucheng(x,y,j,k);
	q.fushuchu(x,y,j,k);
	return 0;
}