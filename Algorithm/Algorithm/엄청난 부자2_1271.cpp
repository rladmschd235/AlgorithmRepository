#include <iostream>
using namespace std;

// �ʵ� ���߿� �ٽ� �������� ���ƿ´�...
int main()
{
	int n, m, divide, remain;
	cin >> n >> m;

	divide = n / m;
	remain = n % m;

	cout << divide << endl << remain;
}