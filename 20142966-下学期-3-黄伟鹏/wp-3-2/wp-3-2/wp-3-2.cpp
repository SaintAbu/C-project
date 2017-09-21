#include <iostream>
#include "Rectangle.h"
using namespace std;
int main()
{
	Rectangle rect;
	rect.set_values(3,4);
	cout<<"c:"<<rect.c();
	return 0;
}