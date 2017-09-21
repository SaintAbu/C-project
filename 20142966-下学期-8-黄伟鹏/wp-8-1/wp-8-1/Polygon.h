#pragma once
#include<iostream>
using namespace std;
class CPolygon
{
protected:
	int width,height;
public:
	CPolygon(void);
	~CPolygon(void);
	void set_values(int a,int b)
	{
		width=a;
		height=b;
	}
	virtual int area()
	{
		return 0;
	}

};

