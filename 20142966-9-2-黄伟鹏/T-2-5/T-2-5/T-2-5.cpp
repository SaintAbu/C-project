#include <iostream>
using namespace std;
bool f(int i)
{
	int j,k=0;
	bool l;
	for(j=1;j<i;j++)
	{
		if(i%j==0)
			k=k+j;

	}
	if(k==i) 
		l=true;
	else
		l=false;
	return l;
}
void main()
{
	int i,j;
	cout<<"1"<<"  ";
	for(i=1;i<=1000;i++)
	{
		j=f(i);
		if(j)
			cout<<i<<"  ";
	}
}
