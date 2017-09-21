#include <iostream>
using namespace std;
void main()
{
	int x;

	for(x=100;x<=200;x++)
	{
		if(x%4==2&&x%7==3&&x%9==5)
		{
			cout<<"Áã¼þ¸öÊý£º"<<x<<endl;
		}
	}
}