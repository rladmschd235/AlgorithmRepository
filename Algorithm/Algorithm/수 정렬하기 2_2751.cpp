#include <iostream>
using namespace std;

int a[1000000], sorted[1000000];

void merge(int left, int right) {
	
	int mid;
	int p1, p2, p3;

	if (left < right) {
		mid = (left + right) / 2; // 중간 피벗
		merge(left, mid); // 왼쪽 배열
		merge(mid + 1, right); // 오른쪽 배열
		p1 = left; // 정렬된 왼쪽 배열에 대한 인덱스
		p2 = mid + 1; // 정렬된 오른쪽 리스트에 대한 인덱스
		p3 = left; // 합병될 리스트에 대한 인덱스
		//분할정렬된 배열의 합병
		while (p1 <= mid && p2 <= right) {
			if (a[p1] > a[p2]) {
				sorted[p3++] = a[p2++];
			}
			else {
				sorted[p3++] = a[p1++];
			}
		}
		// 남아 있는 왼쪽 배열 일괄 복사
		while (p1 <= mid) sorted[p3++] = a[p1++];

		// 남아 있는 오른쪽 배열 일괄 복사
		while (p2 <= right) sorted[p3++] = a[p2++];

		//배열 sorted를 배열 a로 재복사
		for (int i = left; i <= right; i++) {
			a[i] = sorted[i];
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	
	int n, i;
	cin >> n;

	for (i = 1; i <= n; i++) {
		cin >> a[i];
	}
	merge(1, n);
	for (i = 1; i <= n; i++) {
		cout << a[i] << "\n";
	}
	return 0;
}