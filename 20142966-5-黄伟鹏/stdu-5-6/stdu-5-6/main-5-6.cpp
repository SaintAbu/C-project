#include <iostream>
using namespace std;
void main()
{
	int v[4];
	int i;

	cout<<"请输入四个整数：";
	for(i=0;i<=3;i++)cin>>v[i];

	for(i=0;i<=3;i++)cout<<v[i]<<" ";
	cout<<endl;

	for(i=1;i<=3;i++)cout<<v[i]<<" ";
	cout<<v[0]<<endl;

	for(i=2;i<=3;i++)cout<<v[i]<<" ";
	for(i=0;i<=1;i++)cout<<v[i]<<" ";
	cout<<endl;

	cout<<v[3]<<" ";
	for(i=0;i<=2;i++)cout<<v[i]<<" ";
	cout<<endl;
}
