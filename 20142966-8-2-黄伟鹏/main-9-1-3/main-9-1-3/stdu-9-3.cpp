#include <iostream> 
using namespace std;  
void main () 
{ int numbers[5]; 
  int * p;
  p = numbers;  
  *p = 10;   //First element 
  p++;  *p = 20; //Second element
  p = &numbers[2];  *p = 30; //Third element
  p = numbers + 3;  *p = 40; //Fourth element
  p = numbers;  *(p+4) = 50; //Fifthe element
  for (int n=0; n<5; n++)    cout << numbers[n] << ", "; }
