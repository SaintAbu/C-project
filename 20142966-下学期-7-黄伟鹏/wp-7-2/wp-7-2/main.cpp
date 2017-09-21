#include"vector.h"
void main()
{
	vector a(2.0,3.0,2.0),b(2.0,4.0,2.0),c1,c2,c3;
	cout<<"vector a:";
	a.display();
	cout<<endl;
	cout<<"vector b:";
	b.display();
	cout<<endl;
	c1=a+b;
	c1.display();
	cout<<endl;
	c2=a-b;
	c2.display();
	cout<<endl;
	c3=a*b;
	c3.display();
	cout<<endl;
}