#include <iostream>
using namespace std;

int main()
{
	int i,j,a[100],b[100];
	int *x,*y,*p;

	cout<<"确定数组长度：";
	cin>>j;

	cout<<"输入第一组数组："<<endl;
	for(i=0;i<j;i++)cin>>a[i];

	cout<<"输入第二组数组："<<endl;
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