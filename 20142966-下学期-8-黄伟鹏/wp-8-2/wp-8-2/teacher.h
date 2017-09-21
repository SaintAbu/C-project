#pragma once
#include "people.h"
class teacher:public people
{
protected:
	int teacher_id;
public:
	teacher(void);
	~teacher(void);
	void set_idt(int id)
	{
		teacher_id=id;
	}
	void display();
};