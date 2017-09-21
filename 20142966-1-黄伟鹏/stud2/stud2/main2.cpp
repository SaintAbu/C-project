//输入一个整数， 如果它是2或3的倍数， 输出1，否则输出0;
//Huang Wei Peng, 10,9,2014
#include <iostream>
using namespace std;
int main()
{
     int i;
	 std::cout  <<  "请输入一个整数:";
	 std::cin  >>  i;
     bool flag;
	 if (i%2==0||i%3==0) flag = 1;
	 else
		 flag = 0;

	 std::cout << "结果为:"<< flag << std::endl;
	 return 0;
}