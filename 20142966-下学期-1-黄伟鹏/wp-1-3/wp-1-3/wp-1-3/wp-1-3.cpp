#include <iostream>
#include <cmath>
using namespace std;
struct date
{
	int a;
	int b;
	int c;
};
void m(date x)
{
	double i;
	if(x.a/4!=0)
{
	if(x.b==1)
		i=x.c;
	else if(x.b==2)
		i=x.c+31;
	else if(x.b==3)
		i=31+28+x.c;
	else if(x.b==4)
		i=31+31+28+x.c;
	else if(x.b==5)
		i=31+28+31+30+x.c;
	else if(x.b==6)
		i=31+28+31+30+31+x.c;
	else if(x.b==7)
		i=31+28+31+30+31+30+x.c;
	else if(x.b==8)
		i=31+28+31+30+31+30+31+x.c;
	else if(x.b==9)
		i=31+28+31+30+31+30+31+31+x.c;
	else if(x.b==10)
		i=31+28+31+30+31+30+31+31+30+x.c;
	else if(x.b==11)
		i=31+28+31+30+31+30+31+31+30+31+x.c;
	else
		i=31+28+31+30+31+30+31+31+30+31+30+x.c;
}
	else
	{
	if(x.b==1)
		i=x.c;
	else if(x.b==2)
		i=x.c+31;
	else if(x.b==3)
		i=31+29+x.c;
	else if(x.b==4)
		i=31+31+29+x.c;
	else if(x.b==5)
		i=31+29+31+30+x.c;
	else if(x.b==6)
		i=31+29+31+30+31+x.c;
	else if(x.b==7)
		i=31+29+31+30+31+30+x.c;
	else if(x.b==8)
		i=31+29+31+30+31+30+31+x.c;
	else if(x.b==9)
		i=31+29+31+30+31+30+31+31+x.c;
	else if(x.b==10)
		i=31+29+31+30+31+30+31+31+30+x.c;
	else if(x.b==11)
		i=31+29+31+30+31+30+31+31+30+31+x.c;
	else
		i=31+29+31+30+31+30+31+31+30+31+30+x.c;
	}

	cout<<"该日在本年中是第"<<i<<"天"<<endl;
}
void main()
{
	date x;
	cout<<"请输入年，月，日"<<endl;
	cin>>x.a>>x.b>>x.c;
	m(x);
}