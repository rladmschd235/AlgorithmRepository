#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = N; j > i; j--)
		{
			cout << " ";
		}
		for (int h = 0; h < 2*i-1; h++)
		{
			cout << "*";
		}
		cout << endl;
	}
}