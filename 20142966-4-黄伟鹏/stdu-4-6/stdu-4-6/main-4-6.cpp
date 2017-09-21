#include <iostream>
using namespace std;
void main()
{
	int i,j,k,m;
	cin>>k;
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=k-i;j++) cout<<" ";
		for(m=1;m<=i;m++) cout<<"@ ";
		cout<<endl;
	}
}