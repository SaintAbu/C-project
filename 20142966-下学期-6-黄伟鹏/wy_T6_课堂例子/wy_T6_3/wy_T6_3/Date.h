#pragma once
#include <iostream>
using namespace std;

class Date
{
protected:
	int y,mm,d;

public:
	Date(void);
	Date(int y1,int m,int d1){y=y1;mm=m;d=d1;}
	~Date(void);
	void display_d();
};
