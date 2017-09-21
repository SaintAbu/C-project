#pragma once
#include "student.h"

class postgraduent:public student
{
public:
	postgraduent(void);
	~postgraduent(void);
	void set_a(string str){a=str;}
	string get_a(){return a;}
private:
	string a;
};
