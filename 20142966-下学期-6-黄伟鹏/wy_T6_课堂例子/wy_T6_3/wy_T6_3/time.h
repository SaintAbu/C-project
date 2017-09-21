#pragma once
#include <iostream>
using namespace std;

class time
{
protected:
	int h,m,s;
public:
	time(void);
	time(int h1,int m1,int s1){h=h1;m=m1;s=s1;}
	~time(void);

	void display();
};
