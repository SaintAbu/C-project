#include <iostream>
using namespace std;

void main()
{
	int m,c,n;
	int *x,*y;

	cout<<"��������������";
	cin>>m>>n;

	x=&m;
	y=&n;
	c=*x;
	*x=*y;
	*y=c;

	cout<<*x<<" "<<*y;
}