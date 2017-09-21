#include <iostream>
using namespace std;
void main()
{
	int i=1,j=1,n=1;
    for(i=1;i<10;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<i<<"*"<<j<<"="<<i*j;
		}
		n++;
		cout<<endl;
	}
}