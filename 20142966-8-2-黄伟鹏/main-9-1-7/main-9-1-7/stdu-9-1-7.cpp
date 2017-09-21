#include <iostream>
using namespace std;
#define N 5
void maxAndMin(int a[], int *max_p, int *min_p)
{ *max_p = a[0];
  *min_p = a[0];
  for(int i = 1; i < N; i++)
  {   if(a[i] > *max_p)    *max_p = a[i];
      if(a[i] < *min_p)    *min_p = a[i];}}
void main( )
{  int a[N],i,max,min;
   cout << "Please inter " << N << " integers:" << endl;
   for(i = 0; i < N; i++)  cin >> a[i];
   maxAndMin(a, &max, &min);
   cout << "The maximum is: " << max << endl << "The minmum is: " << min << endl;}
