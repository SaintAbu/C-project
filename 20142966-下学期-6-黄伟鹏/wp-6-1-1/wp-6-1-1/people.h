#pragma once
#include<iostream>
#include<string>
#include "student.h"
using namespace std;

class people:public student
{
public:
	people(void);
	~people(void);
	void set(string str){advisor=str;}
	string get(){return advisor;}
private:
	string advisor;
};
