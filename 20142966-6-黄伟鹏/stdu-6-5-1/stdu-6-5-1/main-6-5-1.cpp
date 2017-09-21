#include <iostream>
using namespace std;
void main()
{
	int i,j,t,a[5];
	cout<<"请输入五个整数:";
	for(j=0;j<5;j++)cin>>a[j];
	for(i=0;i<4;i++)
		for(j=0;j<4-i;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			for(j=0;j<5;j++)

			{cout<<a[j]<<" ";}

}