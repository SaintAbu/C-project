#pragma once
class Time
{
public:
	Time(void);
	void sethour(int h);
	void setminute(int m);
	void setsecond(int s);
	void showtime24();
	void showtime12();
	int h1;
	int m1;
	int s1;
	int h2;
	~Time(void);
};

