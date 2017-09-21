#pragma once
#include<iostream>
#include<string>
using namespace std;

class student
{
public:
	student(void);
	~student(void);
	void set(int n,string s,char c);
	void put();
private:
	int num;
	string name;
	char sex;
};
