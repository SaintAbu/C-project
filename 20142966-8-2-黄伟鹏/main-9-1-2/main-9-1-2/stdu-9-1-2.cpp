#include <iostream> 
using namespace std;  
void main () 
{   int firstvalue, secondvalue; 
    int * mypointer;  
    mypointer = &firstvalue; 
   *mypointer = 10; //等价于firstvalue = 10;
   mypointer = &secondvalue; 
   *mypointer = 20; //等价于secondvalue = 20;
   cout << "firstvalue is " << firstvalue << endl;  
   cout << "secondvalue is " << secondvalue << endl; }
