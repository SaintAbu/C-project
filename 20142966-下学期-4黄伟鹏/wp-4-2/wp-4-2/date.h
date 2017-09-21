#pragma once
class date
{
public:
	date(void);
	void setyear(int y);
	void setmonth(int m);
	void setday(int d);
	bool isleapyear();
	void numberofdate();
	void displayChineseDate();
	void displayAmericaDate();
	int y1;
	int m1;
	int d1;
	int number;
	~date(void);
};

