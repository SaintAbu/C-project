#include "student.h"
#include <iostream>
using namespace std;
void main()
{
	student na[3];
	int i;
	int wa[3];
	string ci[3];
	cout<<"������ѧ���������������"<<endl;
	for(i=0;i<3;i++)
	{
		cin>>wa[i];
		cin>>ci[i];
	}
	for(i=0;i<3;i++)
	{
		na[i].input(wa[i],ci[i]);
		na[i].output();
	}
}