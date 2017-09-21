#include <iostream>
#include <string>
using namespace std;
void  main()
{
	string str("Hello World");
	string strl(str,0,5);
	string str2(str,6);
	cout<<"str="<<str<<endl;
	cout<<"strl="<<strl<<endl;
	cout<<"str2="<<str2<<endl;
	cout<<"The length of str is:"<<str.length()<<endl;
	cout<<str.find(str2)<<endl;
	cout<<str.substr(9,2)<<endl;
}