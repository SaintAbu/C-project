#include <iostream>
using namespace std;

int *m,*n;

void mi(int &mgy,int &mxb)
{
	for(mgy=*m;mgy>1;mgy--)
	{
		if(*m%mgy==0&&*n%mgy==0)
			break;
	}

	for(mxb=2;mxb<*m;mxb++)
	{
		if(*m%mxb==0&&*n%mxb==0)
			break;
	}
	
}

void main()
{
	int x,y,a,b;
	
	cout<<"����С˳����������������";
	cin>>x>>y;

	m=&x;
	n=&y;

	mi(a,b);

	cout<<"���Լ��Ϊ��"<<a<<endl;
	cout<<"��С������Ϊ��"<<b;

}