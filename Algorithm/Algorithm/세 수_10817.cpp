#include <iostream>
using namespace std;

int main()
{
	int number[3];
	
	for (int i = 0; i < 3; i++)
	{
		cin >> number[i];
	}

	for (int i = 2; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (number[j] > number[j + 1])
			{
				int temp = number[j];
				number[j] = number[j + 1];
				number[j + 1] = temp;
			}
		}
	}

	cout << number[1];
}