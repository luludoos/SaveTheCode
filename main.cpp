/* �ҳ��û������������ڵ���������C++����
ԭ��Ŀ����C++�������ԭ����ʵ������е��ҵ������Ӱӡ�� p127 ��11�⡣
Coding�� ��˶
��д���ڣ� 2013��3��6��
����޸ģ� 2013��3��7��
*/ 

#include <iostream>
#include <vector>

using namespace std;

vector<int> CalcPrimes(int max)      //�㷨���ģ�
{
	vector<int> Primes;

	for(int i=2; i<max;i++)
	{
		int key = 0;                 //��Ϊ�����Key��֤��ÿ������n�����Ǵ�2��ʼͨ�������ѭ����2��n����ȫ����֤��һ�顣���n��������ô��һ�����ܱ�[2��n-1]��������������

		for (int j=2; j<i;j++)
		{
			if(i!=j && i%j != 0)
			{
				key++;               //������Կ��������Key��ʵ����һ��������������¼��N���²��ܽ�N���������ĸ�����
			}
			if(key == i-2)           //���Key�ĸ���һ������[2,n-1]֮���������ֵĸ�����n-2�������ڵ�n����һ��������
			{
				Primes.push_back(i);    //����Vector<T>.push_back()��������������������ĩ�ˡ�
			}
		}
	}


	return Primes;
}


int main()
{
	cout << "��C++������԰���Ѱ�ҳ����������������ڵ�����������\n" << endl;
	cout << "������룺jacshuo@gmail.com\n" << endl;
	cout << "���ڴ�����һ������2����������" << endl;
	int val = 0;
	cin >> val;
	cout << endl;
	cout << "2~" << val <<"���ڵ������б�����(������2)��" << endl << endl; 
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
	cout << "ͳ�ƽ���� 2~"<< val <<" ���ڵ������� " << Primes.size() << " ����" << endl;
	cout << "������ϣ�" << endl;
	system("pause");

	return 0;
}