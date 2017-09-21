#pragma once
#include "Polygon.h"
class CRectangle:public CPolygon
{
public:
	CRectangle(void);
	~CRectangle(void);
	int area()
	{
		return(width*height);
	}
};

