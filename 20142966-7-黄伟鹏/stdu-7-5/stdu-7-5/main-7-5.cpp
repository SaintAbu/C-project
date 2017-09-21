#include <iostream>
using namespace std;

int f_ack(int,int,int);

int main()
{

	int n,x,y;
	cout<<"请依次输入n,x,y的值：";
	cin>>n>>x>>y;
//确保输入值得正确性
	while (n<0 || x<0 || y<0)
	{
		cout<<"输入有误，请重新依次输入n,x,y的值：";
		cin>>n>>x>>y;
	}
//进行运算并输出结果
	cout<<"阿克玛函数值为"<<f_ack(n,x,y)<<endl;
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
