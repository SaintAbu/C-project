#include<iostream>
#include<string>
#include "student.h"
using namespace std;
int main()
{
  int n;
  string s;
  char c;
  cout<<"����ѧ����Ϣ"<<endl;
  cin>>n>>s>>c;
  student q;
  q.set(n,s,c);
  q. put();
  return 0;
}