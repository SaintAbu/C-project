#include<iostream>
#include "date.h"
using namespace std;
int main()
{
	int y;
	int m;
	int d;
	cout<<"ÇëÊäÈëÈÕÆÚ"<<endl;
	cin>>y>>m>>d;
	date q;
	q.setday( d);
	q.setmonth( m);
	q.setyear( y);
	q.displayAmericaDate();
	q.displayChineseDate();
	q.isleapyear();
	q.numberofdate();
	return 0;
}