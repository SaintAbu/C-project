#pragma once
#include "Polygon.h"

class Triangle:public CPolygon
{
public:
	Triangle(void);
	~Triangle(void);

	int a(){return w*h/2;}
};
