#include <iostream>
using namespace std;
void main()
{
	int n;
	double f;
	cout<<"请输入一个整数:";
	cin>>n;
	for(f=1;n>=1;n--)
	{ 
		f=f*n;
	}
	cout<<"阶乘为:"<<f<<endl;
}