// DP
// 1, 2, 3 더하기 5
// 합을 나타낼 떄는 수를 1개 이상 사용해야하고
// 같은 수를 두 번 이상 연속해서 사용하면 안 된다.
// 이차원 배열을 사용해야 함
// 표는 굿노트 필기 참고
//

#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
	int t; //test case
	int k = 4;

	cin >> t;

	vector<vector<long long>> dp(100001, vector<long long>(4, 0));

	dp[1] = { 0, 1, 0, 0 };
	dp[2] = { 0, 0, 1, 0 };
	dp[3] = { 0, 1, 1, 1 };

	for (int i = 4; i <= 100000; i++) {
		dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % 1000000009;
		dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % 1000000009;
		dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % 1000000009;
	}

	while (t > 0) {
		int n;

		cin >> n;

		cout << (dp[n][1] + dp[n][2] + dp[n][3]) % 1000000009 << '\n';
		
		t--;
	}

	return 0;
}