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
	cout<<"    Ҳ����ʦ�����ţ�"<<gID<<"���ʣ�"<<money<<"����Ҫ�ڿΡ�"<<endl;
}

teacher::~teacher(void)
{
}

