#include "fushu.h"
#include <iostream>

using namespace std;

fushu::fushu(int a,int b)
{
	x=a;
	y=b;
}

int fushu::real()
{
	return x;
}
int fushu::image()
{
	return y;
}

fushu::~fushu()
{
	cout<<"Îö¹¹º¯Êý"<<x<<","<<y<<"."<<endl;
}
