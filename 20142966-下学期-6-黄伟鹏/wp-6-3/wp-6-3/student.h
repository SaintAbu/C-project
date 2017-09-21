#pragma once
#include <iostream>
#include <string>

using namespace std;

class student
{
protected:
	string name;
	int cla;
	int ID;

public:
	student(void);
	~student(void);

	void set_s(string n,int c,int I);

	void show_s();
};

