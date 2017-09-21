#include <iostream>
#include <string>
#define N 4
using namespace std;
struct stu
{
	int num;
	string name;
	string adr;
	double phone;
	string mail;

};
void main()
{
	void zeng(stu a[N]);
	void shan(stu b[N]);
	void jian(stu c[N]);
	void cha(stu d[N]);
	int i;
	stu a[N];
	stu c[N];
	cout<<"请输入"<<N-1<<"个同学的信息"<<endl;
	for(i=0;i<3;i++)
	
		cin>>a[i].num>>a[i].name>>a[i].adr>>a[i].phone>>a[i].mail;
	
	cout<<"同学信息为"<<endl;
	for(i=0;i<3;i++)
	{
		cout<<a[i].num<<" "<<a[i].name<<" "<<a[i].adr<<" "<<a[i].phone<<" "<<a[i].mail<<endl;
	}

	cout<<"请输入增加的同学信息"<<endl;
	cin>>a[3].num>>a[3].name>>a[3].adr>>a[3].phone>>a[3].mail;

	cout<<"总的同学信息为"<<endl;
	for(i=0;i<4;i++)
	{
		cout<<a[i].num<<" "<<a[i].name<<" "<<a[i].adr<<" "<<a[i].phone<<" "<<a[i].mail<<endl;
	}

	int p;
	cout<<"请输入删除第几个同学信息"<<endl;
	cin>>p;
	for(i=0;i<3;i++)
		c[i]=a[i];
	if(p==1)
	{
		c[0]=c[1];
		c[1]=c[2];
		c[2]=c[3];
	
	for(i=0;i<2;i++)
	cout<<c[i].num<<" "<<c[i].name<<" "<<c[i].adr<<" "<<c[i].phone<<" "<<c[i].mail<<endl;
	}
	else if(p==2)
	{
		c[1]=c[2];
	
	for(i=0;i<2;i++)
		cout<<c[i].num<<" "<<c[i].name<<" "<<c[i].adr<<" "<<c[i].phone<<" "<<c[i].mail<<endl;
	}
	else if(p==3)
	{
		for(i=0;i<2;i++)
	cout<<c[i].num<<" "<<c[i].name<<" "<<c[i].adr<<" "<<c[i].phone<<" "<<c[i].mail<<endl;
	}

	int q;
	cout<<"请输入需要修改第几个同学信息"<<endl;
	cin>>q;
	cout<<"请输入修改的同学信息"<<endl;
	cin>>a[q-1].num>>a[q-1].name>>a[q-1].adr>>a[q-1].phone>>a[q-1].mail;
	cout<<"总的同学信息为"<<endl;
	for(i=0;i<3;i++)
	cout<<a[i].num<<" "<<a[i].name<<" "<<a[i].adr<<" "<<a[i].phone<<" "<<a[i].mail<<endl;

	int k;
	cout<<"请输入的查询同学信息的学号"<<endl;
	cin>>k;
	for(i=0;i<3;i++)
	{
		if(a[i].num==k)
			cout<<"查询同学信息为"<<endl<<a[i].num<<" "<<a[i].name<<" "<<a[i].adr<<" "<<a[i].phone<<" "<<a[i].mail<<endl;
	}


}
