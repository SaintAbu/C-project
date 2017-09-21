#include <iostream>
#define n 5
using namespace std;
void main()
{
  double a[n];
  int k,i,j,t,N=5;
  for(i=0;i<=4;i++)
	  cin>>a[i];
  for(i=0;i<N-1;i++)
  {
    k=i;
	for(j=0;j<i;j++)
		if(a[j]>a[k]) k=j;
	if(k!=i)
	{
		t=a[j];
		a[j]=a[k];
		a[k]=t;
	}
  }
  for(i=0;i<=4;i++)
	  cout<<a[i]<<" ";
}