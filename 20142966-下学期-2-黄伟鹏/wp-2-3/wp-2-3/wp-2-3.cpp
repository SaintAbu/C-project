#include<iostream>
#include <string>
#define N 3
using namespace std;
struct stu
{
	int num;
	string name;
	float math,eng,com,pol;
	double score;
};
void main()
{
  stu chengji(stu a[N]);
  stu a[N];
  stu b[N];
  stu c[N];
  stu d[N];
  int i,j,t;
  cout<<"������"<<N<<"��ͬѧ����Ϣ"<<endl;
  for(i=0;i<N;i++)
 {
	cin>>a[i].num>>a[i].name>>a[i].math>>a[i].eng>>a[i].com>>a[i].pol;
 }
  for(i=0;i<N;i++)
  {
	  b[i]=a[i];
	  c[i]=a[i];
	  d[i]=a[i];
  }
  cout<<"����ͬѧ��ϢΪ"<<endl;
  for(i=0;i<N;i++)
  cout<<a[i].num<<" "<<a[i].name<<" "<<a[i].math<<" "<<a[i].eng<<" "<<a[i].com<<" "<<a[i].pol<<endl;



  cout<<"------------------------------------------------------------------------"<<endl;
  cout<<"�ܷ���ߵ�ѧ����ϢΪ"<<endl;//����ܷ���ߵ�ѧ����Ϣ
  for(i=0;i<N;i++)
  a[i].score=a[i].math+a[i].eng+a[i].com+a[i].pol;
  for(i=0;i<N-1;i++)
	  for(j=0;j<N-i-1;j++)
		  if(a[j].math>a[j+1].math)
	  {
		  t=a[j].score;
		  a[j].score=a[j+1].score;
		  a[j+1].score=t;
	  }
	  cout<<a[j+1].num<<" "<<a[j+1].name<<" "<<a[j+1].math<<" "<<a[j+1].eng<<" "<<a[j+1].com<<" "<<a[j+1].pol<<endl;
	  cout<<"�ܷ�Ϊ"<<a[j+1].score<<endl;

	  
	  cout<<"-----------------------------------------------------------------"<<endl;
	  cout<<"��ѯ������߷��밴1"<<"  "<<"��ѯӢ����߷��밴2"<<"  "<<" ��ѯc++��߷��밴3"<<"  "<<"��ѯ�����밴4"<<endl;
	  int s,k;
	  cin>>s;
	  if(s=1)
	  {
		  for(i=0;i<N-1;i++)
			  for(j=0;j<N-1-i;j++)
				  if(b[j].math>b[j+1].math)
			  {
				  k=b[j].math;
		          b[j].math=b[j+1].math;
		          b[j+1].math=k;
			  }
			  cout<<"��������߷�Ϊ"<<b[j+1].math<<endl;
	  }
	  else if(s=2)
 {
		  for(i=0;i<N-1;i++)
			  for(j=0;j<N-1-i;j++)
				  if(b[j].eng>b[j+1].eng)
			  {
				  k=b[j].eng;
		          b[j].eng=b[j+1].eng;
		          b[j+1].eng=k;
			  }
			  cout<<"Ӣ�����߷�Ϊ"<<b[j+1].eng<<endl;
 }
	  else  if(s=3)
   {
		  for(i=0;i<N-1;i++)
			  for(j=0;j<N-1-i;j++)
				  if(b[j].com>b[j+1].com)
			  {
				  k=b[j].com;
		          b[j].com=b[j+1].com;
		          b[j+1].com=k;
			  }
			  cout<<"c++����߷�Ϊ"<<b[j+1].com<<endl;
  }
	  else if(s=4)
   {
		  for(i=0;i<N-1;i++)
			  for(j=0;j<N-1-i;j++)
				  if(b[j].pol>b[j+1].pol)
			  {
				  k=b[j].pol;
		          b[j].pol=b[j+1].pol;
		          b[j+1].pol=k;
			  }
			  cout<<"���ܵ���߷�Ϊ"<<b[j+1].pol<<endl;
	  }


	  cout<<"--------------------------------------------------------------"<<endl;
	  int t1=0,t2=0,t3=0,t4=0,z1,z2,z3,z4,z5;//���ſμ��ܳɼ���ƽ����
	  for(i=0;i<3;i++)
	  {
		  t1=t1+a[i].math;
		  t2=t2+a[i].eng;
		  t3=t3+a[i].com;
		  t4=t4+a[i].pol;
	  }
	  z1=t1/N;
	  z2=t2/N;
	  z3=t3/N;
	  z4=t4/N;
	  z5=(t1+t2+t3+t4)/N;
	  cout<<"������ƽ����Ϊ"<<z1<<endl<<"Ӣ���ƽ����Ϊ"<<z2<<endl<<"c++��ƽ����Ϊ"<<z3<<endl<<"���ܵ�ƽ����Ϊ"<<z4<<endl<<"�ܳɼ���ƽ����Ϊ"<<z5<<endl;


	  cout<<"------------------------------------------------------------------------"<<endl;


	  cout<<"ÿ��ͬѧ���ֽܷ������ϢΪ"<<endl;
	  int l;
	  for(i=0;i<N-1;i++)
		  for(j=0;j<N-i-1;j++)
			  if(d[j].score>d[j+1].score)
			  {
				  l=d[j].score;
				  d[j].score=d[j+1].score;
				  d[j+1].score=l;
			  }
			  for(j=0;j<N;j++)
             cout<<d[j].num<<" "<<d[j].name<<" "<<d[j].math<<" "<<d[j].eng<<" "<<d[j].com<<" "<<d[j].pol<<d[j].score<<endl;


}
 
