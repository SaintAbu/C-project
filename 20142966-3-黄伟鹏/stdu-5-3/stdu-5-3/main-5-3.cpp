#include <iostream>
using namespace  std;
void main()
{
	int  a,b,c,d,e;
	for(a=1;a<100;a++)
	{
		b=a/10;
		c=a%10;
		d=b+c;
		e=b*c;
		if (e>d) cout<<a<<" ";
	}
}