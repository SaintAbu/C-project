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
	
	cout<<"按大小顺序输入两个整数：";
	cin>>x>>y;

	m=&x;
	n=&y;

	mi(a,b);

	cout<<"最大公约数为："<<a<<endl;
	cout<<"最小公倍数为："<<b;

}