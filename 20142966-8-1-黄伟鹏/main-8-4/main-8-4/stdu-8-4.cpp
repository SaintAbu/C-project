#include <iostream>
#include <cmath>
using namespace std;

int i,j;

//����ѧ��ƽ����
int stdu(int a[10][5],int &aver)
{
	int x;
	x=0;

	for(j=0;j<5;j++)
	{
		x=x+a[i][j];
	}
	aver=x/5;
	return aver;
}

//����ƽ����
int sub(int a[10][5],int &aver)
{
	int x;
	x=0;

	for(i=0;i<10;i++)
	{
		x=x+a[i][j];
	}
	aver=x/10;
	return aver;
}

//�������Сֵ
void DX(int a[10][5],int &max,int &min)
{
	max=a[i][0];
	min=a[i][0];

	for(j=0;j<5;j++)
	{
		if(max<a[i][j])max=a[i][j];
		if(min>a[i][j])min=a[i][j];
	}
}

void main()
{
	int aver_stdu,aver_sub,m,n;
	int a[10][5];

	cout<<"��˳�������������ѧ�����Ƴɼ���"<<endl;
	for(i=0;i<10;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];

	//���ѧ��ƽ����
	for(i=0;i<10;i++)
	{
		aver_stdu=stdu(a,aver_stdu);
		cout<<"��"<<i+1<<"��ͬѧ��ƽ����Ϊ��"<<aver_stdu<<endl;
	}
	
	//�������ƽ����
	for(j=0;j<5;j++)
	{
		aver_sub=sub(a,aver_sub);
		cout<<"��"<<j+1<<"��ѧ�Ƶ�ƽ����Ϊ��"<<aver_sub<<endl;
	}

	//��������Сֵ
	for(i=0;i<10;i++)
	{
		DX(a,m,n);
		cout<<"��"<<i+1<<"��ͬѧ����������С�ֱַ�Ϊ��"<<m<<"��"<<n<<endl;
	}

}
