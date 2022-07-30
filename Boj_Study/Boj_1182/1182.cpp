// Brute Force
// 비트마스크
// 부분수열의 합
//
//

#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;


int main() {
	int n = 0;
	int s = 0;

	int sum = 0;	//특정 부분수열의 합
	int cnt = 0;	// 조건을 만족하는 부분수열의 개수

	cin >> n >> s;

	vector<int> a(n);

	//원본 수열 받기
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//부분수열의 합 구하기
	for (int i = 1; i < (1 << n); i++) {	// 부분수열을 만든 것.
		sum = 0;

		for (int k = 0; k < n; k++) {
			// 부분수열에서 k번째 원소가 있는지 확인
			if (i & (1 << k)) {
				sum += a[k];
			}
		}

		//합이 s와 같으면 개수 + 1
		if (sum == s) {
			cnt += 1;
		}
	}

	cout << cnt;


	return 0;
}