#include <iostream>
using namespace std;
int f(int &m,int &n)
{
	int p,q;
	for(p=m;p>=1;p--)
		if(m%p==0&&n%p==0)
		{
			cout<<"最大公约数为："<<p<<" "<<endl;
			break;}
     q=m*n/p;
     cout<<"最小公倍数为："<<n<<endl;
	 return 0;
	
}
void main()
{
	int m,n;
	cin>>m>>n;
	f(m,n);
}