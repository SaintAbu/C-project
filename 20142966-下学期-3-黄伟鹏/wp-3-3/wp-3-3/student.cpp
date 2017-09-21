#include "student.h"
#include<iostream>
#include<string>
using namespace std;


student::student(void)
{
}

student::~student(void)
{
}
void student::input(int a,string str)
{
	age=a;
	name=str;
}
void student::output()
{
    cout<<"ÄêÁä"<<age<<"ĞÕÃû"<<name<<"."<<endl;
}