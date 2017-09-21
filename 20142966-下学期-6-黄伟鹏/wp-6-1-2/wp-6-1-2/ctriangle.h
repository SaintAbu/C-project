#pragma once
#include "ctriangle.h"
#include<iostream>
using namespace std;


class ctriangle:public cpolygon
{
public:
	ctriangle(void);
	~ctriangle(void);
	int area(){return(width*height/2);}
};
