#include <iostream>
using namespace std;
void main( )
{
	float k,sum=0;
	float a[21],b[21];
	int i;
	for(i=3;i<23;i++)
	{
		a[1]=1;a[2]=2;
		a[i]=a[i-1]+a[i-2];
		k=a[i-1]/a[i-2];
		sum=sum+k;
	}
	cout<<sum<<endl;
}