#include <iostream> 
using namespace std;  
void main () 
{   int firstvalue, secondvalue; 
    int * mypointer;  
    mypointer = &firstvalue; 
   *mypointer = 10; //�ȼ���firstvalue = 10;
   mypointer = &secondvalue; 
   *mypointer = 20; //�ȼ���secondvalue = 20;
   cout << "firstvalue is " << firstvalue << endl;  
   cout << "secondvalue is " << secondvalue << endl; }
