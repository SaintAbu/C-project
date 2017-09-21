#pragma once
#include "Polygon.h"
class CTriangle:public CPolygon
{
public:
	CTriangle(void);
	~CTriangle(void);
	int area()
	{
		return(width*height/2);
	}
};

