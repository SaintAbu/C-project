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

	cout<<"输入被除数：";
	cin>>m;

	cout<<"输入除数：";
	cin>>n;

	f=pd(m,n);

	if(f==1)cout<<"能整除！";
	if(f==0)cout<<"不能整除！";
}