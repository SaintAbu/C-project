#include <iostream>
using namespace std;
void main()
{
	int a,b,c,d;
	

	for(a=2;a<=1000;a++)
	{
		d=0;
		for(b=1;b<a;b++)
		{
			c=a%b;
			if(c==0)
			{
				d=d+b;
			}
		}
		if(d==a)
		{
			cout<<a<<" ";
		}
	}
}