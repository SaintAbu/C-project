#include <iostream>
using namespace std;
void main()
{
	int i,a[5],number,index,flag=0;
	cout<<"�����������:";
	for(i=0;i<5;i++)cin>>a[i];
	cout<<"������һ����:";
	cin>>number;
	
	int low=0,high=4,mid;
	while(low<=high )
	{
		mid=(low+high)/2;
		if(number>a[mid]) low=mid+1;
		else if(number<a[mid])high=mid-1;
		else
		{
			index=mid;
			flag=1;
			break;

		}
	}
	cout<<index+1;

}