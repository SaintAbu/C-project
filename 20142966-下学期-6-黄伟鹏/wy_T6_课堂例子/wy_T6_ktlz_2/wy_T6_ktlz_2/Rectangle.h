#pragma once
#include "Polygon.h"
#include <iostream>
using namespace std;

class CRectangle:public CPolygon
{

public:
	CRectangle(void);
	~CRectangle(void);
	int a(){return w*h;}
};
