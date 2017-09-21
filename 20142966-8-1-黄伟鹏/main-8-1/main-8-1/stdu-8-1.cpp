#include <iostream>
#include <cmath>
using namespace std;
int AB(int &m,int &n)
{
	char a;
	if (m>n) a='>';
	else  if(m==n)a='=';
	else a='<';

	return a;
}
void main()
{
int x,y;
char j;
cout<<"请输入两个数:";
cin>>x>>y;
j=AB(x,y);
cout<<x<<j<<y<<" ."<<endl;
}