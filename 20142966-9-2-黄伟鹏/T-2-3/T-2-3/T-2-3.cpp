#include <iostream>
using namespace std;
int f(int &m,int &n)
{
	int p,q;
	for(p=m;p>=1;p--)
		if(m%p==0&&n%p==0)
		{
			cout<<"���Լ��Ϊ��"<<p<<" "<<endl;
			break;}
     q=m*n/p;
     cout<<"��С������Ϊ��"<<n<<endl;
	 return 0;
	
}
void main()
{
	int m,n;
	cin>>m>>n;
	f(m,n);
}