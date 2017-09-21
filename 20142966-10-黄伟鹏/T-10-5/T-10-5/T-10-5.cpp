#include <iostream>
using namespace std;
void main()
{
	int x,n;
	cout<<"请输入当月利润n"<<endl;
	cin>>n;
	if(n<=10)   n=n+n/10;
	else
		if(n>10&&n<=20)    n=n+1+(n-1)*0.075;
		else
			if(n>20&&n<=40)  n=n+1+0.75+(n-20)*0.05;
			else
				if(n<=60)  n=n+1+0.75+1+(n-40)*0.03;
				else
					if(n<=100)   n=n+1+0.75+1+0.6+(n-60)*0.015;
					else
						n=n+1+0.75+1+0.6+0.6+(n-100)*0.01;
	x=n*10000;
	cout<<x<<endl;
}