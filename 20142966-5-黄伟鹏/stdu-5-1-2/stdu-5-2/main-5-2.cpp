#include <iostream>
#include <cstring>
using namespace std;
void main()
{char str1[10],str2[10],str3[10];
cout<<"Please input two strings:";
cin>>str1;
cin>>str2;
if(strcmp(str2,str1))     strcpy(str3,str2);
else   strcpy(str3,str1);
cout<<str3<<endl;
}
