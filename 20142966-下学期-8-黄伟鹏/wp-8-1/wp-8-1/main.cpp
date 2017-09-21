#include <iostream>
#include "Polygon.h"
#include "Triangle.h"
#include "Rectangle.h"

using namespace std;

void main()
{
	CTriangle trgl;
	CRectangle rect;
	CPolygon *p;

	p=&rect;
	p->set_values(4,5);
	cout<<p->area()<<endl;

	p=&trgl;
	p->set_values(4,5);
	cout<<p->area()<<endl;
}