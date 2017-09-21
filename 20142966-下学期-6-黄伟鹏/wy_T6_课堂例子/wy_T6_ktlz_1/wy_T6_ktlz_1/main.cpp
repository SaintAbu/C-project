//

#include "postgraduent.h"
void main()
{
   postgraduent xq;
   xq.setValues(29,"Xiao Qiang",'M');
   xq.set_a("Prof. Su");
   xq.display();
   cout<<"Advisor:"<<xq.get_a()<<endl;
}