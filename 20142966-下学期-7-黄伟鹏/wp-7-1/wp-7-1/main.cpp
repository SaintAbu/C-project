#include "complex.h"
void main()
{
	complex a(1.0,2.0),b(3.0,4.0),c1,c2,c3,c4;
	cout<<"complex a:";
	a.display();
	cout<<endl;
	cout<<"complex b:";
	b.display();
	cout<<endl;
	c1=a+b;
	cout<<"complex a+b:";
	c1.display();
	cout<<endl;
	c2=a-b;
	cout<<"complex a-b:";
	c2.display();
	cout<<endl;
	c3=a*b;
	cout<<"complex a*b:";
	c3.display();
	cout<<endl;
	c4=a/b;
	cout<<"complex a/b:";
	c4.display();
	cout<<endl;


}