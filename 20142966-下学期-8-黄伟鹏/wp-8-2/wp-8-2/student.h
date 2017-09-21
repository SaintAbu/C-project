#pragma once
#include "people.h"
class student:public people
{
protected:
	int student_id;
public:
	student(void);
	~student(void);
	void set_ids(int id)
	{
		student_id=id;
	}
	void display();
};
