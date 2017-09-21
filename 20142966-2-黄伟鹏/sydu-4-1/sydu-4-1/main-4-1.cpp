#include <iostream>
#include <cmath>
using namespace std;
void main()
{
	int s;
	double p,w;
	cout<<"货物重量：";
	cin>>w;
	cout<<"路程：";
	cin>>s;
	if(s<50)p=10*s*w;
	else if(s<100)p=10*s*w*(1-0.02);
	     else if(s<200)p=10*s*w*(1-0.05);
	          else if(s<400)p=10*s*w*(1-0.08);
		           else if(s<800)p=10*s*w*(1-0.11);
		                else p=10*s*w*(1-0.15);
	cout<<"运费为："<<p<<endl;
}