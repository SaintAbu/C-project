#pragma once
#include <iostream>
using namespace std;
class vector
{
public:
	vector(void);
	vector(double x,double y,double z)
	{
		x1=x,y1=y,z1=z;
	}
	~vector(void);
	void display();
	friend vector operator+(vector a,vector b);
	friend vector operator-(vector a,vector b);
	friend vector operator*(vector a,vector b);
private:
	double x1;
	double y1;
	double z1;
};

