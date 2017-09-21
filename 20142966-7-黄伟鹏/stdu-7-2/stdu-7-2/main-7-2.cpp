#include <iostream>
#include <cmath>
using namespace std;
int ab(int n)
{
	int j=0,i,k,flag,temp;
	for(k=3;k<=n;k=k+2)
	{
		temp=int(sqrt(double(k)));
		flag=1;
		for(i=2;i<=temp;i++)
		{
			if(k%i==0) flag=0;
		}
		if(flag)
		{j++;
			cout<<k<<" ";}
			
	}
	return 0;
}
void main()
{
	
	int g,h=100;
	g=ab(h);
}

