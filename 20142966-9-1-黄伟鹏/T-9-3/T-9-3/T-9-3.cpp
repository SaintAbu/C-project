#include <iostream>
using namespace std;
void main()
{
	int a,b,c,d;
	cout<<"请输入一个三位整数";
	cin>>a;
	b=a/100;
	c=a%10;
	d=(a-c)/10%10;
	cout<<b<<endl;
	cout<<d<<endl;
	cout<<c<<endl;
}