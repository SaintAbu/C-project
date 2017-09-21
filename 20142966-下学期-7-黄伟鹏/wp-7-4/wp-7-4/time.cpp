#include "time.h"


time::time(void)
{
}


time::~time(void)
{
}
istream&operator>>(istream&input,time&x)
{

	input>>x.a1>>x.b1>>x.c1;
	return input;
}
ostream&operator<<(ostream&ouput,time&x)
{
	ouput<<x.a1<<" "<<x.b1<<" "<<x.c1;
	return ouput;
}
time time::operator++()
{
	if(c1!=59)
		return time(a1,b1,++c1);
	else if(b1!=59)
		return time(a1,++b1,00);
	else if(c1!=23)
		return time(++a1,00,00);
	else
		return time(00,00,00);
}