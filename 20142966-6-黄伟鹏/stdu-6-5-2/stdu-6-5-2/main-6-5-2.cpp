# include <iostream>
using namespace std;
void main ()
{
  int i,k,j,t,a[5];
  cout<<"请输入五个整数:";
  for(k=0;k<5;k++) cin>>a[k];
  for(i=0;i<4;i++)
  {
	  k=i;
	  for(j=i+1;j<5;j++)
		  if(a[j]>a[k]) k=j;
	  if(k!=i)
	  {
		  t=a[i];
		  a[i]=a[k];
		  a[k]=t;
	  }
		  
  }
  for(k=0;k<5;k++)
	  cout<<a[k]<<" ";
}