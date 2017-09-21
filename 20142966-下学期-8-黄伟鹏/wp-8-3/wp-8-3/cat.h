#pragma once
#include "animal.h"
class cat:public animal
{
public:
	cat(void);
	~cat(void);
	void speak()
	{
		cout<<"My name is Cat."<<endl;
	}
};

