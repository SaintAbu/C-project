#include <iostream>
using namespace std;
void main()
{
	int i,j,k,m,s;
	cout<<"上三角中共有多少行?";
	cin>>k;
	while(k==0||k==1)cin>>k;
	for (i=1;i<=k;i++)
	{
		for(j=1;j<=k-i;j++) cout<<" ";
		for(m=1;m<=i;m++) cout<<"* ";
		cout<<endl;
	}
	for (i=k-1;i>=1;i--)
	{
		for(j=k-1;j>=i;j--) cout<<" ";
		for (m=k-1;m>=k-i;m--) cout<<"* ";
		cout<<endl;
	}
}