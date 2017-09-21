#include <iostream>
using namespace std;
int f(int a)
{
int b,c,d;
bool i;
b=a/100;
c=a%10;
d=(a-c)/10%10;
if(c*c*c+d*d+b==a)
i=true;
else i=false;
return i;
}
void main()
{
	int a,i;
	bool j;
	for(a=100;a<=999;a++)
	{
		j=f(a);
		if(j==true)
			cout<<a<<" ";
	}
}
