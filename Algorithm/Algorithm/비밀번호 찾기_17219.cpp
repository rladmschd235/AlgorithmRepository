#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	int N, M;
	string address, password;
	unordered_map<string, string> unm;

	cin >> N >> M;
	
	for (int i = 0; i < N; i++)
	{
		cin >> address >> password;
		unm[address] = password;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> address;
		cout << unm[address] << '\n';
	}
}