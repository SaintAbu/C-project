#include <iostream>
#include "Time.h"
using namespace std;
int main()
{
	int h;
	int m;
	int s;
	cout<<"����ʱ�䣺"<<endl;
	cin>>h>>m>>s;
	Time a;
	a.sethour(h);
	a.setminute(m);
	a.setsecond(s);
	a.showtime24();
	a.showtime12();
	return 0;
}