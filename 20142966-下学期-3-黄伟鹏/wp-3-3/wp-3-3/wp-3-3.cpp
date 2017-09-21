#include "student.h"
#include <iostream>
using namespace std;
void main()
{
	student na[3];
	int i;
	int wa[3];
	string ci[3];
	cout<<"请输入学生的年龄和姓名："<<endl;
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