#pragma once
#include<iostream>
using namespace std;
class fenshu
{
public:
	fenshu(void);
	fenshu(int a,int b,int c,int d)
	{
		a1=a,b1=b,c1=c,d1=d;
	}
	~fenshu(void);
	//void display();
	friend istream&operator>>(istream&,fenshu&);
	friend ostream&operator<<(ostream&,fenshu&);
	int a1,b1,c1,d1;


};

