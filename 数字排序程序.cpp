#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	cout << "������������������С����\n"<< endl;
	cout << "��������Ҫ��������ָ�����" << endl;
	int intNumCount = 0;
	cin >> intNumCount;
	int arrayNum[intNumCount];                //����һ������ 
	for(int i = 0;i < intNumCount; i++)       //��һ��ѭ�������û�����       
	{
		cout << "�������" << i+1 << "��������";
		cin >> arrayNum[i];
	}
	
	for (int j = 0; j < intNumCount - 1; j++)     //�ò��뷨����,���뷨����ֱ�۵�һ�����򷽷�������Ч�ʱȽϵ͡� 
	{
	    
		 for (int a = 0 ; a < intNumCount - 1 ; a++) 
		 {
				int temp;
		        temp = arrayNum[a];
				if (temp > arrayNum[a+1])
				{
				arrayNum[a] = arrayNum[a+1];
				arrayNum[a+1] = temp;
			    }				
		
		}
		
	} 
	
	cout << "��������������Ϊ��" << endl;
	for (int k = 0 ; k < intNumCount; k++)
	{
		cout << arrayNum[k] << "," ;
		} 
		
		cout << endl;
		system("pause");
	return 0;
}
