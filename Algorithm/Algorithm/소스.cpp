#include <iostream>
using namespace std;

int main()
{
	//int a = 5;
	//int* pA;
	//pA = &a;

	//cout << a << endl;
	//cout << *pA << endl;

	//*pA = 50;
	//cout << a << endl;

	//string number;
	//cout << "�ֹ� ��� ��ȣ�� �Է��Ͻÿ�: ";
	//cin >> number;
	//cout << number << endl;

	//cout << "-�� ���ŵ� �ֹε�Ϲ�ȣ: ";
	//int index = number.find("-");
	//cout << number.erase(index, 1);

	int a[8] = { 0 };
	fill(a, a + 4, 1);
	for (int elem : a)
	{
		cout << elem << endl;
	}
	fill(a + 4, a + sizeof(a) / sizeof(int), 2);
	for (int elem : a)
	{
		cout << elem << endl;
	}
}