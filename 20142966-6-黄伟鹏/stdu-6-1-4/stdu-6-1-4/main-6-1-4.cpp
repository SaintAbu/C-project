#include <iostream>
using  namespace std;
void main()
{   int jimmy[3][5], i,j;    
   cout << "��һ�ַ���ȡ��ַ:" << endl;
   for(i = 0; i < 3;i++)
  {         for(j = 0; j < 5; j++)cout << &jimmy[i][j] << "  ";
            cout << endl;
   }	
 cout << "�ڶ��ַ���ȡ��ַ:" << endl;
 for(i = 0; i < 3;i++)
 {      for(j = 0; j < 5; j++) cout << jimmy[i] + j<< "  ";
        cout << endl;
 }
}

