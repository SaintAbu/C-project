#include <iostream>
using namespace std;

int pd(int &x,int&y)
{
	int flag;

	if(x%y==0)flag=1;
	else flag=0;

	return flag;
}

void main()
{
	int m,n,f;

	cout<<"���뱻������";
	cin>>m;

	cout<<"���������";
	cin>>n;

	f=pd(m,n);

	if(f==1)cout<<"��������";
	if(f==0)cout<<"����������";
}