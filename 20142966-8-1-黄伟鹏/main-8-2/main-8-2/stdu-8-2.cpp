#include <iostream>
#include <cmath>
using namespace std;
int aver_a(int a[100],int &n)
{
	int i,x,y;
	x=0;
	for(i=0;i<n;i++)
	{
		x=x+a[i];
	}
	y=x/n;

	return y;
}

void main()
{
	int aver_a(int a[100],int &n);
	int b[20],j,m,aver;

	cout<<"输入数组的长度：";
	cin>>m;

	cout<<endl<<"输入"<<m<<"个数：";
	for(j=0;j<m;j++)cin>>b[j];

	aver=aver_a(b,m);

	cout<<"平均数为："<<aver;
}