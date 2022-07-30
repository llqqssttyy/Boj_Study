// DP
// 2 x n 타일링
// 2xn 크기의 직사각형을 채우는 방법의 수를 10007로 나는 나머지를 출력한다
// 문제 치환 >> 피보나치 수열!
// f(n)의 값은 f(n-1) 혹은 f(n-2)이다. 
// 즉, f(n) = f(n-1) + f(n-2)
// 
// 

#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

int DP[1001] = {0,};

int main() {
	int n;

	cin >> n;
	DP[1] = 1;
	DP[2] = 2;

	//bottom-up
	for (int i = 3; i <= n; i++) {
		DP[i] = (DP[i - 1] + DP[i - 2]) % 10007;
	}

	cout << DP[n] % 10007;

	return 0;
}