#include <iostream>
using namespace std;
void main()
{
	int a,n;
	cout<<"������һ������"<<endl;
	cin>>a;
	if(a%2!=0)
	{
		if(a%3!=0) cout<<"Ϊ����������3�ı���"<<endl;
		else  cout<<"Ϊ��������3�ı���"<<endl;
	}
	if(a%2==0)
	{
		int n=0;
		while (a>=1)
		{
			a=a/10;  n=n+1;
		}
		cout<<n<<"λ��,Ϊż��"<<endl;}
}