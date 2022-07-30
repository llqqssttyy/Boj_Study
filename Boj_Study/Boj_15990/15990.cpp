// DP
// 1, 2, 3 ���ϱ� 5
// ���� ��Ÿ�� ���� ���� 1�� �̻� ����ؾ��ϰ�
// ���� ���� �� �� �̻� �����ؼ� ����ϸ� �� �ȴ�.
// ������ �迭�� ����ؾ� ��
// ǥ�� �³�Ʈ �ʱ� ����
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