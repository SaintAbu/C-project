#include <iostream>
using namespace std;
void main()
{
	 int a,b;
	 int q[10][10];
	 for(a=0;a<6;a++)
	 {
		 q[a][a]=1;
		 q[a][0]=1;
	 }
	 for(a=2;a<6;a++)
	 {
		 for(b=1;b<a;b++)
		 q[a][b]=q[a-1][b-1]+q[a-1][b];
	 }
	 for(a=0;a<6;a++)
	 {
		 for(b=0;b<=a;b++)
			 cout<<q[a][b]<<" ";
		 cout<<endl;
	 }
}