#include <iostream>
using namespace std;
void  main()
{
	int a,b,c,d,n;
    a=2,d=3,c=1;
	cin>>n;
	for (b=n*a+n*(n-1)*d/2;b<=n;b%4==0)
	{b++;}
	cout<<b<<" "<<endl;
}