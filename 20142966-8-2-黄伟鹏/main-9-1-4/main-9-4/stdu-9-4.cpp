#include <iostream>
using namespace std;
void main()
{   int **a;
    int row,col,i,j;
    cout << "����������������������";
    cin >> row >> col;    
    a = new int* [row] ; //����ռ�
    for(i = 0; i < row;i++)         *(a + i) = new int[col];
    cout << "�����" << row << "��" << col << "�о���" << endl;
    for(i = 0; i < row; i++)
         for(j = 0; j < col; j++)
	cin >> a[i][j];   
cout << "�����ת��Ϊ��" << endl;
   for(j = 0; j < col; j++)
   {
        for(i = 0; i < row; i++)
	cout << a[i][j] << " ";
        cout << endl;
   }
   //�ͷſռ�
   for(i = 0; i < row; i++)   
        delete [] a[i];    
   delete [] a;
}
