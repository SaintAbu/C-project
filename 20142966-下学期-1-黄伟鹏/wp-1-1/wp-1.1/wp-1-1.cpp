#include <iostream>
#include <cmath>
using namespace std;
struct fushu
{
	int a;
	int b;
};
void add(fushu i,fushu j)
{
	fushu l;
	l.a=i.a+j.a;
	l.b=i.b+j.b;
	if(l.b>0)
		cout<<"��Ϊ"<<l.a<<"+"<<l.b<<"i"<<endl;
	else 
		cout<<"��Ϊ"<<l.a<<l.b<<"i"<<endl;
}
void sub(fushu i,fushu j)
{
	fushu l;
	l.a=i.a-j.a;
    l.b=i.b-j.b;
	if(l.b>0)
		cout<<"��Ϊ"<<l.a<<"+"<<l.b<<"i"<<endl;
	else
		cout<<"��Ϊ"<<l.a<<l.b<<"i"<<endl;
}
void mul(fushu i,fushu j)
{
	fushu l;
	l.a=i.a*j.a-i.b*j.b;
	l.b=i.a*j.b+i.b*j.a;
	if(l.b>0)
		cout<<"��"<<l.a<<"+"<<l.b<<"i"<<endl;
	else
		cout<<"��"<<l.a<<l.b<<"i"<<endl;
}
void com(fushu i,fushu j)
{
	fushu l;
	l.a=(i.a*j.a+i.b*j.b)/(j.a*j.a+i.b*j.b);
	l.b=(i.b*j.a-i.a*j.b)/(j.a*j.a+i.b*j.b);
	if(l.b>0)
		cout<<"��"<<l.a<<"+"<<l.b<<"i"<<endl;
	else
		cout<<"��"<<l.a<<l.b<<"i"<<endl;
}
void qm(fushu i )
{
	float q,p;
	p=i.a*i.a+i.b*i.b;
	q=sqrt(p);
	cout<<"ģΪ"<<q<<endl;
}
void ge(fushu i)
{
	fushu l;
	double f;
	l.a=i.a;
	if(i.b>0)
		cout<<"�����Ϊ"<<l.a<<i.b<<"i"<<endl;
	else
		f=i.b*i.b;
	l.b=sqrt(f);
		cout<<"�����Ϊ"<<l.a<<"+"<<l.b<<"i"<<endl;
}
void main()
{
	fushu i;
	fushu j;
	cout<<"��������������ʵ�����鲿";
		cin>>i.a>>i.b>>j.a>>j.b;
		add(i,j);
		sub(i,j);
		mul(i,j);
		com(i,j);
		qm(i);
		ge(i);
}