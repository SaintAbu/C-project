#pragma once
#include "crectangle.h"
#include<iostream>
using namespace std;

class crectangle:public cpolygon
{
public:
	crectangle(void);
	~crectangle(void);
	int area();{return(width*height);}
};
