#include <iostream>
using namespace std;
float dot_prod(float x,float y);
void main( )
{
	int n;
	cout<<"������������Ԫ�صĸ�����";
	cin>>n;
	int i,a[100],b[100],c[100],f=0;
	cout<<"����������a��";
		for(i=0;i<n;i++)
			cin>>a[i];
	cout<<"����������b��";
		for(i=0;i<n;i++)
			cin>>b[i];
		for(i=0;i<n;i++)
			c[i]=dot_prod(a[i],b[i]);
			for(i=0;i<n;i++)
				f=f+c[i];
			cout<<"��������ڻ�Ϊ��"<<f<<endl;

}
float dot_prod(float x,float y)
{
	int z;
	z=x*y;
	return z;
}
