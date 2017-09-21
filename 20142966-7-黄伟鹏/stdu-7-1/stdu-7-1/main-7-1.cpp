#include <iostream>
using namespace std;
int ab(int n)
{
	int i,f=1;
    for(i=n;i>=1;i--)
	{ f=f*i;}
	return f;
}
void main()
{
	int n,i,f=1;
	cout<<"请输入一个非负整数:";
	cin>>n;
	cout<<n<<"!="<<ab(n)<<endl;
}