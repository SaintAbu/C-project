#include <iostream>
using namespace std;
void main()
{
	int n,f=1;
	cout<<"������һ������:";
	cin>>n;
	while (n>=1)
	{
		f=n*f;
		n--;
	}
	cout<<"������Ľ׳�Ϊ:"<<f<<endl;
}