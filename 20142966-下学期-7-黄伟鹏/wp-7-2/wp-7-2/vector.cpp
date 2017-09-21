#include "vector.h"

vector::vector(void)
{
}
vector::~vector(void)
{
}
void vector::display()
{
	cout<<"("<<x1<<","<<y1<<","<<z1<<")";
}

vector operator+(vector a,vector b)
{
	return vector(a.x1+b.x1,a.y1+b.y1,a.z1+b.z1);
}
vector operator-(vector a,vector b)
{
	return vector(a.x1-b.x1,a.y1-b.y1,a.z1-b.z1);
}
vector operator*(vector a,vector b)
{
	return vector(a.x1*b.x1,a.y1*b.y1,a.z1*b.z1);
}
