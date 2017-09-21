#pragma once
#include <iostream>

using namespace std;

class teacher
{
protected:
	int gID;
	int money;
public:
	teacher(void);
	~teacher(void);

	void set_t(int g,int m);
	void show_t();
};
