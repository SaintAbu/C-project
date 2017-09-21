#include <iostream>
#include <cmath>

using namespace std;

void DX(int a[100],int &n,int &max,int &min)
{
	int i;

	max=a[0];
	min=a[0];

	for(i=0;i<n;i++)
	{
		if(max<a[i])max=a[i];
		if(min>a[i])min=a[i];
	}
}

void main()
{
	void DX(int a[100],int &n,int &max,int &min);

	int b[100],j,m,x,y;

	cout<<"输入数组的长度：";
	cin>>m;

	cout<<endl<<"输入"<<m<<"个数：";
	for(j=0;j<m;j++)cin>>b[j];

	DX(b,m,x,y);

	cout<<"最大值："<<x<<endl;
	cout<<"最小值："<<y;
}