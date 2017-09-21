#include <iostream>
#include <cmath>
using namespace std;
void main()
{
	int j=0,n,i,flag,temp;
	for(n=3;n<100;n=n+2)
	{
		temp=int(sqrt(double(n)));
		flag=1;
		for(i=2;i<=temp;i++)
		{
			if(n%i==0) 
			{flag=0; break;}
		}
		if(flag)
		{
			j++;
			cout <<n<<" ";
		}
	}
}