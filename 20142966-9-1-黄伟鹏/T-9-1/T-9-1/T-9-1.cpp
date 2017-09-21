#include <iostream>
#include <cmath>
using namespace std;
void main()
{
	double a,b,c,d,e,x,f;
	cout<<"请输入x ";
	cin>>x;
	e=tanl(x);
	cout<<"输入任意实数a和b ";
    cin>>a>>b;
		c=log(a); f=log(b);
	    d=pow(a,b);
		cout<<"弧度x的正切值为："<<e<<endl;
		cout<<"以b为底a的对数为："<<c<<endl;
		cout<<"a的b次幂为："<<d<<endl;
}
