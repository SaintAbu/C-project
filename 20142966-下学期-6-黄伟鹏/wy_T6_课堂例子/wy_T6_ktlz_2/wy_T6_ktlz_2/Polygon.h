#pragma once
#include <iostream>
using namespace std;

class CPolygon
{
protected:
	int w,h;
public:
	CPolygon(void);
	~CPolygon(void);
	void set_v(int a,int b){w=a;h=b;}
};
