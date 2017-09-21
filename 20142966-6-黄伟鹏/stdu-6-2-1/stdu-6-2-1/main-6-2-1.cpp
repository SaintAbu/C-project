#include <iostream>
using namespace std;

int main()
{
     int array[10];
     int i;

     //Input
     cout << "Please input 10 integers:";
     for(i =0; i <=9; i++)
	cin >> array[i];

     //Output
     for(i = 0; i<=9; i++)
	cout << array[i] << "   ";
     cout << endl;

     return 0;
}
