#include <iostream> 
#include <new> 
using namespace std;  
int main () 
{   int i,n; 
    int * p; 
   cout << "How many numbers would you like to type? "; 
   cin >> n; 
   p= new  int[n]; //��̬����ռ�
   if (p == NULL)//�����Ƿ�ɹ��ж�
  {  cout << "Error: memory could not be allocated"; 
       return 1;  }  
  for (i = 0; i < n; i++)       cin >> p[i]; 
   cout << "You have entered in inverse ordering: "; 
   for (i = n - 1; i >= 0; i--)    cout << p[i] << ", ";    
   delete[ ] p; //�ͷŶ�̬����ռ�
   return 0; }
