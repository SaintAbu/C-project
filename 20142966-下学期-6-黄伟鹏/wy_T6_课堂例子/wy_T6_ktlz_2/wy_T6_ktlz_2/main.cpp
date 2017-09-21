//
#include "Triangle.h"
#include "Rectangle.h"

void main()
{
	CRectangle rect;
	Triangle trgl;
	rect.set_v(4,5);
	trgl.set_v(4,5);
	cout<<rect.a()<<endl;
	cout<<trgl.a()<<endl;
}