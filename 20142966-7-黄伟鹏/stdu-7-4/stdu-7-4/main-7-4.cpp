#include <iostream>
using namespace std;
#define  SIZE 10

void maxAndMin(int a[], int& maximum, int& minimum)
{
	int i,d;
	for(i=0;i<9;i++)
	{
		if(a[i]<a[i+1])
		{
			d=a[i+1];
			a[i+1]=a[i];
			a[i]=d;
		}
	}
	minimum=a[9];
	for(i=0;i<9;i++)
	{
		if(a[i]>a[i+1])
		{
			d=a[i+1];
			a[i+1]=a[i];
			a[i]=d;
		}
	}
	maximum=a[9];
}

void main()
{
	int numbers[10], maxValue, minValue,i;
	cout << "Please input " << SIZE << " numbers:";
	for(i = 0; i < SIZE ; i++)
		cin >> numbers[i];

	maxAndMin(numbers, maxValue, minValue);

	cout << "The maximum is: " << maxValue << endl;
	cout << "The minimum is: " << minValue << endl;
}
