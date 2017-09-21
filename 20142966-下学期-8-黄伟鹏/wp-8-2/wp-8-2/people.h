#pragma once
#include<iostream>
#include<string>
using namespace std;
class people
{
protected:
	int age;
	string name;
public:
	people(void);
	~people(void);
	void set_vale(int a, string n)
	{
		age=a;
		name=n;
	}
	virtual void display()=0; 
};


