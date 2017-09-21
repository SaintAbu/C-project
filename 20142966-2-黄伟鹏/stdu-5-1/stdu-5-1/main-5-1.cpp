#include <iostream>
using namespace std;
void main()
{
	int s,d;
	double w;
	cout<<"货物重量：";
	cin>>w;
	cout<<"路程：";
	cin>>s;
	d=s/50;
	if(d>16)d=16;
	double p;

	switch (d)
	{
     case'0':p=10*s*w;break;
     case'1':p=10*s*w*(1-0.02);break;
     case'2':
	 case'3':p=10*s*w*(1-0.05);break;
     case'4':
	 case'5':
	 case'6':
	 case'7':p=10*s*w*(1-0.08);break;
     case'8':
	 case'9':
	 case'10':
	 case'11':
	 case'12':
	 case'13':
	 case'14':
	 case'15':p=10*s*w*(1-0.11);break;
     case'16':p=10*s*w*(1-0.15);break;
	}
	cout<<"运费为："<<p<<endl;
}