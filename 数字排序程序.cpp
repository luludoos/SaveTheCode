#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	cout << "已启动输入数字排序小程序！\n"<< endl;
	cout << "请先输入要排序的数字个数：" << endl;
	int intNumCount = 0;
	cin >> intNumCount;
	int arrayNum[intNumCount];                //定义一个数组 
	for(int i = 0;i < intNumCount; i++)       //用一个循环接受用户输入       
	{
		cout << "请输入第" << i+1 << "个整数：";
		cin >> arrayNum[i];
	}
	
	for (int j = 0; j < intNumCount - 1; j++)     //用插入法排序,插入法是最直观的一种排序方法，但是效率比较低。 
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
	
	cout << "排序后的数字阵列为：" << endl;
	for (int k = 0 ; k < intNumCount; k++)
	{
		cout << arrayNum[k] << "," ;
		} 
		
		cout << endl;
		system("pause");
	return 0;
}
