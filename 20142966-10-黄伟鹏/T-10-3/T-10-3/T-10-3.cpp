#include <iostream>
#define n 5
using namespace std;
void main()
{
	int a[n][n],i,j,x=0,y=0;
	cout<<"������n�׾���"<<endl;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	for(i=0;i<n;i++)
		x=x+a[i][i];
	for(j=0;j<n;j++)
		y=y+a[j][n-j-1];
	cout<<"�Խ���Ԫ��֮��Ϊ��"<<x<<" "<<y<<endl;
}
