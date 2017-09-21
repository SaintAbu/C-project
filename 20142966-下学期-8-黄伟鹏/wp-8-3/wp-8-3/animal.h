#pragma once
#include<iostream>
using namespace std;
class animal
{
public:
	animal(void);
	~animal(void);
	virtual void speak()
	{
		cout<<"My name is Animal."<<endl;
	}

};

