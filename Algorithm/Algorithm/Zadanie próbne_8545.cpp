#include <iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;

	for (int i = str.size() - 1; i > -1; i--)
	{
		cout << str[i];
	}
}