#pragma once
#include <iostream>
using namespace std;
class complex
{
public:
	complex(double real=0.0,double image=0.0)
	{
		this->real=real,this->image=image;
	}
	~complex(void);
	void display();
	friend complex operator+(complex a,complex b);
	friend complex operator-(complex a,complex b);
	friend complex operator*(complex a,complex b);
	friend complex operator/(complex a,complex b);
private:
	double real;
	double image;
};

