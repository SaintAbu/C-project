#include <iostream>
using namespace std;
void main()
{
	int i,k,j,a[5];
	cout<<"����������������:"<<endl;
	for(i=0;i<5;i++)cin>>a[i];
	cout<<"������û�е�һ����:"<<endl;
	cin>>j;
	for(i=0;i<5;i++)
		if(j<a[i])
		{
			for(k=4;k>=i;k--)
			
				a[k+1]=a[k];

				a[i]=j;
				break;

			

		}
		for(i=0;i<6;i++)
			cout<<a[i]<<" ";


}