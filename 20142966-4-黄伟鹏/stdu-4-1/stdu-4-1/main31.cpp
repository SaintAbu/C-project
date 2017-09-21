#include <iostream>
using namespace std;
void main()
{
	int n,f=1;
	cout<<"请输入一个整数:";
	cin>>n;
	while (n>=1)
	{
		f=n*f;
		n--;
	}
	cout<<"这个数的阶乘为:"<<f<<endl;
}