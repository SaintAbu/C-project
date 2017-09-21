#include <iostream>
using namespace std;
void main()
{   int **a;
    int row,col,i,j;
    cout << "请输出矩阵的行数和列数：";
    cin >> row >> col;    
    a = new int* [row] ; //申请空间
    for(i = 0; i < row;i++)         *(a + i) = new int[col];
    cout << "请输出" << row << "行" << col << "列矩阵：" << endl;
    for(i = 0; i < row; i++)
         for(j = 0; j < col; j++)
	cin >> a[i][j];   
cout << "矩阵的转置为：" << endl;
   for(j = 0; j < col; j++)
   {
        for(i = 0; i < row; i++)
	cout << a[i][j] << " ";
        cout << endl;
   }
   //释放空间
   for(i = 0; i < row; i++)   
        delete [] a[i];    
   delete [] a;
}
