#include "fushu.h"
#include <iostream>

using namespace std;

void main()
{
	int r1,r2,i1,i2;

	cout<<"������ʵ����ʵ�����鲿��"<<endl;
	cin>>r1>>i1;

	fushu T(r1,i1);

	r2=T.real();
	i2=T.image();

	if(i2>0)cout<<"���ʵ��Ϊ��"<<r2<<"+"<<i2<<"i."<<endl;
	if(i2<0)cout<<"���ʵ��Ϊ��"<<r2<<i2<<"i."<<endl;
	if(i2==0)cout<<"���ʵ��Ϊ��"<<r2<<"."<<endl;
}