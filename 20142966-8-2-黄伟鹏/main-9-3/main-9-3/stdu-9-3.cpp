#include <iostream>
using namespace std;

int main()
{
	int i,j,a[100],b[100];
	int *x,*y,*p;

	cout<<"ȷ�����鳤�ȣ�";
	cin>>j;

	cout<<"�����һ�����飺"<<endl;
	for(i=0;i<j;i++)cin>>a[i];

	cout<<"����ڶ������飺"<<endl;
	for(i=0;i<j;i++)cin>>b[i];
	
	p=new int[j];
	if(p==NULL)
	{
		cout<<"Error:memory could not be allocated";
		return 1;
	}
	x=a;
	y=b;

	cout<<endl;
	for(i=0;i<j;i++)cout<<*(x+i)+*(y+i)<<" ";
	
	delete[]p;
	return 0;
}