#pragma once

class line
{
public:
	line(void);
	~line(void);

	void input();
	void output();
	float c();

private:
	float x1,y1,z1,x2,y2,z2;
};