#include <iostream>
using namespace std;
void main()
{
	int a,n;
	cout<<"请输入一个整数"<<endl;
	cin>>a;
	if(a%2!=0)
	{
		if(a%3!=0) cout<<"为奇数，不是3的倍数"<<endl;
		else  cout<<"为奇数，是3的倍数"<<endl;
	}
	if(a%2==0)
	{
		int n=0;
		while (a>=1)
		{
			a=a/10;  n=n+1;
		}
		cout<<n<<"位数,为偶数"<<endl;}
}