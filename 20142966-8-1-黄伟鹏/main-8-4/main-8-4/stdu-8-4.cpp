#include <iostream>
#include <cmath>
using namespace std;

int i,j;

//所有学生平均数
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

//各科平均数
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

//求最大最小值
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

	cout<<"按顺序依次输入各个学生各科成绩："<<endl;
	for(i=0;i<10;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];

	//输出学生平均数
	for(i=0;i<10;i++)
	{
		aver_stdu=stdu(a,aver_stdu);
		cout<<"第"<<i+1<<"个同学的平均数为："<<aver_stdu<<endl;
	}
	
	//输出各科平均数
	for(j=0;j<5;j++)
	{
		aver_sub=sub(a,aver_sub);
		cout<<"第"<<j+1<<"个学科的平均数为："<<aver_sub<<endl;
	}

	//输出最大最小值
	for(i=0;i<10;i++)
	{
		DX(a,m,n);
		cout<<"第"<<i+1<<"个同学的最大分与最小分分别为："<<m<<"，"<<n<<endl;
	}

}
