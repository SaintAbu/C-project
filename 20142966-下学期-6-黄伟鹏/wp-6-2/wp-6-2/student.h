#pragma once

#include "people.h"

#include <iostream>
#include <string>

using namespace std;

class student:public people
{
private:
	int ID;

public:
	student(void);
	void set_ID(int I);

	void display_ID();
	~student(void);
};
