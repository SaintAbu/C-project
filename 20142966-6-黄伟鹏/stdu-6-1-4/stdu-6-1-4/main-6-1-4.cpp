#include <iostream>
using  namespace std;
void main()
{   int jimmy[3][5], i,j;    
   cout << "第一种方法取地址:" << endl;
   for(i = 0; i < 3;i++)
  {         for(j = 0; j < 5; j++)cout << &jimmy[i][j] << "  ";
            cout << endl;
   }	
 cout << "第二种方法取地址:" << endl;
 for(i = 0; i < 3;i++)
 {      for(j = 0; j < 5; j++) cout << jimmy[i] + j<< "  ";
        cout << endl;
 }
}

