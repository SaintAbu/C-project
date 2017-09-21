#include "complex.h"


complex::~complex(void)
{
}
void complex::display()
{
	cout<<real;
	if(image>0)
		cout<<"+";
	cout<<image<<"i";
}

complex operator+(complex a,complex b)
{
	return complex(a.real+b.real,a.image+b.image);
}
complex operator-(complex a,complex b)
{
	return complex(a.real-b.real,a.image-b.image);
}
complex operator*(complex a,complex b)
{
	return complex(a.real*b.real+a.image*b.image,a.real*b.image+a.image*b.real);
}
complex operator/(complex a,complex b)
{
	return complex((a.real*b.real+a.real*b.real)/(b.image*b.image+b.real*b.real),(a.real*b.image-a.image*b.real)/(b.image*b.image+b.real*b.real));
}