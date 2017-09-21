#pragma once
#include <iostream>
#include<string>
using namespace std;
class student
{
public:
	student(void);
	~student(void);

	void input(int a,string str);
	void output();
private:
	int age;
    string name;

};
