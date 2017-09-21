#include<iostream>
#include "date.h"
using namespace std;

date::date(void)
{
}


date::~date(void)
{
}

void date::setyear(int y)
{
	y1=y;
}
void date::setmonth(int m)
{
	m1=m;
}
void date::setday(int d)
{
	d1=d;
}
void date::numberofdate()
{
	if((y1%4==0&&y1%100!=0)||y1/400==0)
	{
		if(m1==1)
			number=d1;
		if(m1==2)
			number=31+d1;
		if(m1==3)
			number=31+29+d1;
		if(m1==4)
			number=31+29+31+d1;
		if(m1==5)
			number=31+29+31+30+d1;
		if(m1==6)
			number=31+29+31+30+31+d1;
		if(m1==7)
			number=31+29+31+30+31+30+d1;
		if(m1==8)
			number=31+29+31+30+31+30+31+d1;
		if(m1==9)
			number=31+29+31+30+31+30+31+31+d1;
		if(m1==10)
			number=31+29+31+30+31+30+31+31+30+d1;
		if(m1==11)
			number=31+29+31+30+31+30+31+31+30+31+d1;
		if(m1==12)
			number=31+29+31+30+31+30+31+31+30+31+30+d1;
	}
	else
	{
		if(m1==1)
			number=d1;
		if(m1==2)
			number=31+d1;
		if(m1==3)
			number=31+28+d1;
		if(m1==4)
			number=31+28+31+d1;
		if(m1==5)
			number=31+28+31+30+d1;
		if(m1==6)
			number=31+28+31+30+31+d1;
		if(m1==7)
			number=31+28+31+30+31+30+d1;
		if(m1==8)
			number=31+28+31+30+31+30+31+d1;
		if(m1==9)
			number=31+28+31+30+31+30+31+31+d1;
		if(m1==10)
			number=31+28+31+30+31+30+31+31+30+d1;
		if(m1==11)
			number=31+28+31+30+31+30+31+31+30+31+d1;
		if(m1==12)
			number=31+28+31+30+31+30+31+31+30+31+30+d1;
	}
	cout<<"该天在该年中是第"<<number<<"天"<<endl;
}
bool date::isleapyear()
{
	if((y1%4==0&&y1%100!=0)||y1/400==0)
	{
		cout<<"该年是瑞年"<<endl;
	}
	else
	{cout<<"该年不是瑞年"<<endl;}
return 0;}
void date::displayChineseDate()
{
	cout<<y1<<"年"<<m1<<"月"<<d1<<"日"<<endl;
}
void date::displayAmericaDate()
{
	if(m1==1)
		cout<<"January"<<" "<<d1<<","<<y1<<endl;
	else
	if(m1==2)
		cout<<"February"<<" "<<d1<<","<<y1<<endl;
	else
	if(m1==3)
		cout<<"March"<<" "<<d1<<","<<y1<<endl;
	else
	if(m1==4)
		cout<<"April"<<" "<<d1<<","<<y1<<endl;
	else
	if(m1==5)
		cout<<"May"<<" "<<d1<<","<<y1<<endl;
	else
	if(m1==6)
		cout<<"June"<<" "<<d1<<","<<y1<<endl;
	else
	if(m1==7)
		cout<<"July"<<" "<<d1<<","<<y1<<endl;
	else
	if(m1==8)
		cout<<"August"<<" "<<d1<<","<<y1<<endl;
	else
	if(m1==9)
		cout<<"September"<<" "<<d1<<","<<y1<<endl;
	else
	if(m1==10)
		cout<<"October"<<" "<<d1<<","<<y1<<endl;
	else
	if(m1==11)
		cout<<"November"<<" "<<d1<<","<<y1<<endl;
	else
	if(m1==12)
		cout<<"December"<<" "<<d1<<","<<y1<<endl;
}