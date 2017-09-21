#include<iostream>
#include "Array_min.h"
using namespace std;
void Array_min::set_value()
{
	int i;
	for(i=0;i<10;i++)
		cin>>array[i];
}
void Array_min::min_value()
{
	int i;
	min=array[0];
	for(i=1;i<10;i++)
		if(array[i]<min)
			min=array[i];
}
void Array_min::show_value()
{
	cout<<"min="<<min;
}

