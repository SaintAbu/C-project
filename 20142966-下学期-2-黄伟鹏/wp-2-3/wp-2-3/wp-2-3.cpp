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
  cout<<"请输入"<<N<<"个同学的信息"<<endl;
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
  cout<<"所有同学信息为"<<endl;
  for(i=0;i<N;i++)
  cout<<a[i].num<<" "<<a[i].name<<" "<<a[i].math<<" "<<a[i].eng<<" "<<a[i].com<<" "<<a[i].pol<<endl;



  cout<<"------------------------------------------------------------------------"<<endl;
  cout<<"总分最高的学生信息为"<<endl;//输出总分最高的学生信息
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
	  cout<<"总分为"<<a[j+1].score<<endl;

	  
	  cout<<"-----------------------------------------------------------------"<<endl;
	  cout<<"查询高数最高分请按1"<<"  "<<"查询英语最高分请按2"<<"  "<<" 查询c++最高分请按3"<<"  "<<"查询马哲请按4"<<endl;
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
			  cout<<"高数的最高分为"<<b[j+1].math<<endl;
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
			  cout<<"英语的最高分为"<<b[j+1].eng<<endl;
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
			  cout<<"c++的最高分为"<<b[j+1].com<<endl;
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
			  cout<<"马哲的最高分为"<<b[j+1].pol<<endl;
	  }


	  cout<<"--------------------------------------------------------------"<<endl;
	  int t1=0,t2=0,t3=0,t4=0,z1,z2,z3,z4,z5;//四门课及总成绩的平均分
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
	  cout<<"高数的平均分为"<<z1<<endl<<"英语的平均分为"<<z2<<endl<<"c++的平均分为"<<z3<<endl<<"马哲的平均分为"<<z4<<endl<<"总成绩的平均分为"<<z5<<endl;


	  cout<<"------------------------------------------------------------------------"<<endl;


	  cout<<"每个同学按总分降序的信息为"<<endl;
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
 
