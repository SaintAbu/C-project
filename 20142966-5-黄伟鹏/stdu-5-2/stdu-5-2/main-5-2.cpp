#include <iostream>
using namespace std;
void main()
{
	float v[3];
	float a;

	cout<<"����һ������";
	cin>>a;

	int i;
	cout<<"������ά������";
	for(i=0;i<=2;i++) cin>>v[i];
	for(i=0;i<=2;i++)
	{
		v[i]=a*v[i];
	}

	for(i=0;i<=2;i++) cout<<v[i]<<" ";
}