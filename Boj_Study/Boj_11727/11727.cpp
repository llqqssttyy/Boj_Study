// DP
// 2 x n 타일링
// 2xn 크기의 직사각형을 채우는 방법의 수를 10007로 나는 나머지를 출력한다
// 문제 치환 >> 피보나치 수열!
// f(n)의 값은 f(n-1) 혹은 f(n-2) * 2이다(2의 공백을 채울 수 있는 경우의 수가 2가지 이기 때문). 
// 즉, f(n) = f(n-1) + 2 * f(n-2)
// 
// 

#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

int DP[12] = { 0, };

int main() {
	int n;
	int t;

	cin >> t;

	DP[1] = 1;
	DP[2] = 2;

	for (int j = 0; j < t; j++) {
		cin >> n;

		//bottom-up
		for (int i = 3; i <= n; i++) {
			DP[i] = (DP[i - 1] + DP[i - 2] + DP[i - 3]);
		}

		cout << DP[n] << "\n";

		//DP 초기화
		for (int i = 0; i < 12; i++) {
			DP[i] = 0;
		}
	}

	cout << DP[n];

	return 0;
}