//����һ�������� �������2��3�ı����� ���1���������0;
//Huang Wei Peng, 10,9,2014
#include <iostream>
using namespace std;
int main()
{
     int i;
	 std::cout  <<  "������һ������:";
	 std::cin  >>  i;
     bool flag;
	 if (i%2==0||i%3==0) flag = 1;
	 else
		 flag = 0;

	 std::cout << "���Ϊ:"<< flag << std::endl;
	 return 0;
}