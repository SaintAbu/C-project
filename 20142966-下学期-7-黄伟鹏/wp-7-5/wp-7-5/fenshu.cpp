#include "fenshu.h"


fenshu::fenshu(void)
{
}


fenshu::~fenshu(void)
{
}
istream&operator>>(istream&input,fenshu&x)
{
	input>>x.a1>>x.b1>>x.c1>>x.d1;
	return input;
}
ostream&operator<<(ostream&ouput,fenshu&x)
{
	int a2,b2,a3,b3,a4,b4;
	a2=x.b1*x.d1;
	b2=x.a1*x.c1;
	a3=x.a1*x.d1+x.c1*x.b1;
	b3=x.b1*x.d1;a4=x.a1*x.d1-x.c1*x.b1;
	b4=x.b1*x.d1;
	for(int n2=b2;n2>=2;n2--)
	{
		if(a2%n2==0&&b2%n2==0)
		{
			a2=a2/n2;
		    b2=b2/n2;
		}
	}
	for(int n3=a3;n3>=2;n3--)
	{
		{
			if(b3%n3==0&&a3%n3==0)
			a3=a3/n3;
		b3=b3/n3;
		}
		}
	for(int n4=a4;n4>=2;n4--)
	{
		{
		if(b4%n4==0&&a4%n4==0)
			a4=a4/n4;
		b4=b4/n4;
		}
	}
	ouput<<b2<<"/"<<a2<<endl;
	//ouput<<a3<<"/"<<b3<<endl;
	//ouput<<a4<<"/"<<b4<<endl;
	return ouput;
}