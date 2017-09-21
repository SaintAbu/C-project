#pragma once

class point
{
public:
	point(void);
	point(float a,float b,float c);
	~point(void);
private:
	float x,y,z;

	friend class line;
};
