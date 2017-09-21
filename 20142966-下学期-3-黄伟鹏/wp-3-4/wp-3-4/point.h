#pragma once

class point
{
public:
	point(void);
	~point(void);

	void input();
	void output();
	float r_x();
	float r_y();
	float r_z();

private:
	float x,y,z;
};
