#include <iostream>
#define x 5
using  namespace  std;
void main()
{
	double a[x];
	int i,j,t,N=5;
	for(i=0;i<=4;i++)
		cin>>a[i];
	for(i=0;i<N-1;i++) 
		for(j=0;j<N-1;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
				for(i=0;i<=4;i++)
					cout<<a[i]<<" ";
		
}