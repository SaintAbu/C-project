#include <iostream>
using namespace std;
void main()
{
	int a,b;
	for(a=1;a<=4;a++)
	{
		for(b=1;b<=a;b++) cout<<"*";
		cout<<endl;
	}
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=3;j>=i;j--)
			cout<<"*";
		cout<<endl;
	}
}