#include <iostream>
using namespace std;
void main()
{
	int n;
	double f;
	cout<<"������һ������:";
	cin>>n;
	for(f=1;n>=1;n--)
	{ 
		f=f*n;
	}
	cout<<"�׳�Ϊ:"<<f<<endl;
}