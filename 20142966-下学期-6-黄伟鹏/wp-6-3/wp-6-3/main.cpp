#include "zhujiao.h"

void main()
{
	string n1;
	int c1;
	int I1;
	int g1;
	int m1;

	cout<<"�������̵��������༶��ѧ�ţ����ż����ʣ�"<<endl;
	cin>>n1>>c1>>I1>>g1>>m1;

	zhujiao D;

	D.set_s(n1,c1,I1);
	D.set_t(g1,m1);

	D.show_s();
	D.show_t();
}