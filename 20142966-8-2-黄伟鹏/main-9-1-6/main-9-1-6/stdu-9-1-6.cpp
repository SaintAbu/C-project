#include <iostream> 
#include <new> 
using namespace std;  
int main () 
{   int i,n; 
    int * p; 
   cout << "How many numbers would you like to type? "; 
   cin >> n; 
   p= new  int[n]; //动态申请空间
   if (p == NULL)//申请是否成功判断
  {  cout << "Error: memory could not be allocated"; 
       return 1;  }  
  for (i = 0; i < n; i++)       cin >> p[i]; 
   cout << "You have entered in inverse ordering: "; 
   for (i = n - 1; i >= 0; i--)    cout << p[i] << ", ";    
   delete[ ] p; //释放动态申请空间
   return 0; }
