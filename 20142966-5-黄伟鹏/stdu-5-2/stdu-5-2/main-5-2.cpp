#include <iostream>
using namespace std;
void main()
{
	float v[3];
	float a;

	cout<<"输入一个数：";
	cin>>a;

	int i;
	cout<<"输入三维向量：";
	for(i=0;i<=2;i++) cin>>v[i];
	for(i=0;i<=2;i++)
	{
		v[i]=a*v[i];
	}

	for(i=0;i<=2;i++) cout<<v[i]<<" ";
}