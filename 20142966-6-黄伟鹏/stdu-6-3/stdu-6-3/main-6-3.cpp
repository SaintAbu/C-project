#include <iostream>
using namespace std;

void main()

{
	int a[3][3],i,j,b[3][3];
	cout<<"请输入的一个3*3矩阵:"<<endl;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++) cin>>a[i][j] ;
	
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			b[j][i]=a[i][j];
		}
		cout<<"请输出专制:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		cout<<b[i][j]<<" ";
	cout<<endl;
	}


}
