#include<iostream>
#include<cmath>
using  namespace std;
struct zbd
{
	int a;
	int b;
	int c;
};
void jl(zbd i,zbd j)
{
	zbd k;
	double l,q;
	k.a=i.a-j.a;
	k.b=i.b-j.b;
	k.c=i.c-j.c;
 	q=k.a*k.a+k.b*k.b+k.c*k.c;
	l=sqrt(q);
	cout<<"����֮��ľ�����"<<l<<endl;
}
void main()
{
	int l;
	zbd i;
	zbd j;
	cout<<"������������ά�����"<<endl;
	cin>>i.a>>i.b>>i.c>>j.a>>j.b>>j.c;
	jl(i,j);
}

