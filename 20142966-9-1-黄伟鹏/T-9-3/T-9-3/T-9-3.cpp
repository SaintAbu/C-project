#include <iostream>
using namespace std;
void main()
{
	int a,b,c,d;
	cout<<"������һ����λ����";
	cin>>a;
	b=a/100;
	c=a%10;
	d=(a-c)/10%10;
	cout<<b<<endl;
	cout<<d<<endl;
	cout<<c<<endl;
}