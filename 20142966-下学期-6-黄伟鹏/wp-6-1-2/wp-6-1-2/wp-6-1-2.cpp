#include "cpolygon.h"
#include "crectangle.h"
#include "ctriangle.h"
#include<iostream>
using namespace std;

int main()
{
	crectangle rect;
	ctriangle trgl;
	rect.set_values(4,5);
	trgl.set_values(4,5);
	cout<<rect.area()<<endl;
	cout<<trgl.area()<<endl;
	return 0;
}