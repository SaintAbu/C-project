#include <iostream>
using namespace std;

void main()

{
	int a[3][3],i,j,b[3][3];
	cout<<"�������һ��3*3����:"<<endl;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++) cin>>a[i][j] ;
	
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			b[j][i]=a[i][j];
		}
		cout<<"�����ר��:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		cout<<b[i][j]<<" ";
	cout<<endl;
	}


}
