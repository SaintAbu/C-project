#pragma once
#include<iostream>
using namespace std;
class cpolygon
{
protected:
	int width,height;
public:
	cpolygon(void);
	~cpolygon(void);
	void set_values(int a,int b){width=a;height=b;}
};
