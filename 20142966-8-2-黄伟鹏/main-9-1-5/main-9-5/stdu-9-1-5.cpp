#include <iostream>
using namespace std;
void main()
{	
         int **p;
	int *p1;
	int a=1;
	p1=&a;
	p=&p1;
	cout<<*p<<endl;
	cout<<**p<<endl;
}
