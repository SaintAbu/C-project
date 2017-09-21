#include <iostream>
using namespace std;
#define SIZE 30 
void main()
{
	float Fibonacci[SIZE]={1,2};
	int i;

	cout<<Fibonacci[0]<<" "<<Fibonacci[1]<<" ";

	for(i=2;i<=SIZE;i++)
	{
		Fibonacci[i]=Fibonacci[i-1]+Fibonacci[i-2];
		cout<<Fibonacci[i]<<" ";
	}
}
