#include "teacher.h"

teacher::teacher(void)
{
}
void teacher::set_t(int g,int m)
{
	gID=g;
	money=m;
}
void teacher::show_t()
{
	cout<<"    也是老师，工号："<<gID<<"工资："<<money<<"，需要授课。"<<endl;
}

teacher::~teacher(void)
{
}

