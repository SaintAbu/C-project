#include <iostream>
#include <string>
using namespace std;

void main()
{
	string str1,str2;
	int a,b;
	cin>>str1;
	str2=".";
	a=str1.find(str2);
	b=str1.length();
	cout<<str1.substr(0,a)<<endl;
	cout<<str1.substr(a+1)<<endl;

}