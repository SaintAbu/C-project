#pragma once
#include"animal.h"
class liebao:public animal
{
public:
	liebao(void);
	~liebao(void);
	void speak()
	{
		cout<<"My name is liebao."<<endl;
	}
};

