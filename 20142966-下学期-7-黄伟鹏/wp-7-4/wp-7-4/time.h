#pragma once
#include<iostream>
using namespace std;
class time
{
public:
	time(void);
	time(int a,int b,int c)
	{
		a1=a,b1=b,c1=c;
	}
	~time(void);
	void display();
	friend istream&operator>>(istream&,time&);
    friend ostream&operator<<(ostream&,time&);
	time time::operator++();
	time time::operator--(int);
private:
	int a1,b1,c1;
};

