#include <iostream>
using namespace std;

int main()
{
	string N;
	cin >> N;

	if (N == "A+")
	{
		cout << "4.3";
	}
	else if(N == "A0")
	{
		cout << "4.0";
	}
	else if (N == "A-")
	{
		cout << "3.7";
	}
	else if (N == "B+")
	{
		cout << "3.3";
	}
	else if (N == "B0")
	{
		cout << "3.0";
	}
	else if (N == "B-")
	{
		cout << "2.7";
	}
	else if(N == "C+")
	{
		cout << "2.3";
	}
	else if (N == "C0")
	{
		cout << "2.0";
	}
	else if (N == "C-")
	{
		cout << "1.7";
	}
	else if (N == "D+")
	{
		cout << "1.3";
	}
	else if (N == "D0")
	{
		cout << "1.0";
	}
	else if (N == "D-")
	{
		cout << "0.7";
	}
	else
	{
		cout << "0.0";
	}
}