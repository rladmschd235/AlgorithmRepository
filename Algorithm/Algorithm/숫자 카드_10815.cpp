#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M, input;
	unordered_set<int> s;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		s.insert(input);
	}

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> input;

		if (s.find(input) == s.end())
		{
			cout << 0 << ' ';
		}
		else
		{
			cout << 1 << ' ';
		}
	}
}