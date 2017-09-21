#pragma once
#include "time.h"
#include "Date.h"

class z:public Date,public time
{
public:
	z(void);
	z(int y1,int m,int d1,int h1,int m1,int s1):Date(y1,m,d1),time(h1,m1,s1){}
	~z(void);

	void display_z();
};
