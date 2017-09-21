#include <iostream>
#include <cmath>
using namespace std;
void main()
{
	double x,y;
	cout<<"input_x:";
	cin>>x;
	cout<<"input_y:";
	cin>>y;
	char ch;
	cout<<"input_symbol:";
	cin>>ch;
	double a;
	switch (ch)
	{
	case'+':a=x+y;break;
	case'-':a=x-y;break;
	case'*':a=x*y;break;
	case'/':a=x/y;break;
	}
	cout<<a<<endl;
}