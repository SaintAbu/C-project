#include <iostream>
using namespace std;
void main()
{
	double v[10];
	cout<<"请输入十位同学成绩：";
	
	double x,y,flag;
	x=0;
	int i;
	for(i=0;i<=9;i++)cin>>v[i];
	for(i=0;i<=9;i++)
	{
		x=x+v[i];
	}
	y=x/10;
	
	cout<<"平均分为："<<y<<endl;

	for(i=0;i<=9;i++)
	{
		if(v[i]>y) cout<<i+1<<" "<<v[i]<<endl;
	}
	
}