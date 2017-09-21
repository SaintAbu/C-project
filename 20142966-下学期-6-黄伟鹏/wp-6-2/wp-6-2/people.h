#pragma once

#include <iostream>
#include <string>

using namespace std;


class people
{
protected:
	int age;
	string name;
	
public:
	people(void);
	void set_an(int a,string n);

	void display();

	~people(void);
};