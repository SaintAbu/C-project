#include <iostream>
using namespace std;
float dot_prod(float x,float y);
void main( )
{
	int n;
	cout<<"请输入数组中元素的个数：";
	cin>>n;
	int i,a[100],b[100],c[100],f=0;
	cout<<"请输入数组a：";
		for(i=0;i<n;i++)
			cin>>a[i];
	cout<<"请输入数组b：";
		for(i=0;i<n;i++)
			cin>>b[i];
		for(i=0;i<n;i++)
			c[i]=dot_prod(a[i],b[i]);
			for(i=0;i<n;i++)
				f=f+c[i];
			cout<<"两数组的内积为："<<f<<endl;

}
float dot_prod(float x,float y)
{
	int z;
	z=x*y;
	return z;
}
