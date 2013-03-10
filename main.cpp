/* 找出用户输入整数以内的素数——C++程序，
原题目见《C++程序设计原理与实践》机械工业出版社影印版 p127 第11题。
Coding： 王硕
编写日期： 2013年3月6日
最后修改： 2013年3月7日
*/ 

#include <iostream>
#include <vector>

using namespace std;

vector<int> CalcPrimes(int max)      //算法核心！
{
	vector<int> Primes;

	for(int i=2; i<max;i++)
	{
		int key = 0;                 //因为用这个Key保证了每个数（n）都是从2开始通过下面的循环被2至n的数全部验证了一遍。如果n是素数那么它一定不能被[2，n-1]的所有数整除。

		for (int j=2; j<i;j++)
		{
			if(i!=j && i%j != 0)
			{
				key++;               //这里可以看到，这个Key其实就是一个计数器，它记录了N以下不能将N整除的数的个数。
			}
			if(key == i-2)           //如果Key的个数一旦满足[2,n-1]之间所有数字的个数即n-2，则现在的n就是一个素数。
			{
				Primes.push_back(i);    //利用Vector<T>.push_back()函数，将素数加入容器末端。
			}
		}
	}


	return Primes;
}


int main()
{
	cout << "此C++程序可以帮你寻找出你输入正整数以内的所有素数。\n" << endl;
	cout << "程序代码：jacshuo@gmail.com\n" << endl;
	cout << "请在此输入一个大于2的正整数：" << endl;
	int val = 0;
	cin >> val;
	cout << endl;
	cout << "2~" << val <<"以内的素数列表如下(不包括2)：" << endl << endl; 
	cout << "***************************" << endl;
	vector<int>Primes = CalcPrimes(val);
	for(int i=0; i<Primes.size(); i++)
	{	
		if (i<9)
		{
			cout << Primes[i]<<"\t";
		}
		if (i==9)
		{
			cout << Primes[i] << endl;
		}
		if (i>9)
		{
			if ((i+1)%10 == 0)
			{
				cout << Primes[i] << endl;
			}
			else
			{
				cout << Primes[i] << "\t";
			}
		}
	}
	cout << endl;
	cout << "***************************"<<endl<< endl;
	cout << "统计结果： 2~"<< val <<" 以内的素数共 " << Primes.size() << " 个。" << endl;
	cout << "计算完毕！" << endl;
	system("pause");

	return 0;
}