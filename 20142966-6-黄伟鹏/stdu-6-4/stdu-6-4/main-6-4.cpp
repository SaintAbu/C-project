#include <iostream>
using namespace std;

void main()
{
	int a[3][3],i,j,b[3][3],c[3][3],s;
	cout<<"�������һ��3*3����:"<<endl;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++) cin>>a[i][j];
	cout<<"������ڶ���3*3�ľ���:"<<endl;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++) cin>>b[i][j];
	for(i=0;i<3;i++)
		
	{
		for(j=0;j<3;j++)
		{   c[i][j]=0;
			for(s=0;s<3;s++)

				c[i][j]+=a[i][s]*b[s][j];
		}
     }
	cout<<"�������������Ļ�:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		
			cout<<c[i][j]<<" ";
		cout<<endl;

	}

}