#include <iostream>
#include <string>
#define N 5
using namespace std;
struct stdu
{
	int num;
	string name;
	int mark;
};
void main()
{
	void id(stdu q[N]);
	stdu q[N];
	int i,j,t;
	cout<<"������5��ͬѧ�Ļ�����Ϣ"<<endl;
	for(i=0;i<=4;i++)
		cin>>q[i].num>>q[i].name>>q[i].mark;
	cout<<"ȫ����ϢΪ"<<endl;
	for(i=0;i<=4;i++)
		cout<<q[i].num<<"."<<q[i].name<<"."<<q[i].mark<<endl;
	for(i=0;i<N-1;i++)
		for(j=0;j<N-i-1;j++)
		if(q[j].mark>q[j+1].mark)
		{
			t=q[j].mark;
		    q[j].mark=q[j+1].mark;
		    q[j+1].mark=t;
	}
		cout<<"��߷�ͬѧ����ϢΪ"<<endl;
		cout<<q[j+1].num<<"."<<q[j+1].name<<"."<<q[j+1].mark<<endl;
}
