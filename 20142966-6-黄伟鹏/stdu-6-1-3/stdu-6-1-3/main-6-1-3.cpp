#include <iostream>
#define N  5
using namespace std;
void main()
{
	int i,a[N],number,index;
	bool flag = 0;
	cout<<"Please input"<< N <<"integers:"<<endl;
	for(i=0;i<N;i++)  cin>>a[i];  // ‰»Î
	cout<<"Please input the finding number:"<<endl;
	cin>>number;
	for(i=0;i<N-1;i++)
		if(a[i]==number)
		{
         index=i;
		 flag=1;
		 break;
		}
}