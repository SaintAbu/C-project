#include <iostream>
using namespace std;

int f_ack(int,int,int);

int main()
{

	int n,x,y;
	cout<<"����������n,x,y��ֵ��";
	cin>>n>>x>>y;
//ȷ������ֵ����ȷ��
	while (n<0 || x<0 || y<0)
	{
		cout<<"����������������������n,x,y��ֵ��";
		cin>>n>>x>>y;
	}
//�������㲢������
	cout<<"�����꺯��ֵΪ"<<f_ack(n,x,y)<<endl;
	return 0;
}

int f_ack(int n,int x,int y)
{
	int f;
	if(n==0)  f=x+1;
	if(y==0)
	{
		if(n==1)   f=x;
		if(n==2)   f=0;
		if(n==3)   f=1;
		if(n>=4)   f=2;
	}
	if(n!=0&&y!=0)
		f=f_ack(n-1,f_ack(n,x,y-1),x);
	return f;


}
