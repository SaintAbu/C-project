#include "student.h"

void main()
{
	int a1;
	string n1;
	int I1;

	cout<<"������ѧ����ID�����䣬������"<<endl;
	cin>>I1>>a1>>n1;

	student T;
	T.set_an(a1,n1);
	T.set_ID(I1);

	T.display();
	T.display_ID();
}