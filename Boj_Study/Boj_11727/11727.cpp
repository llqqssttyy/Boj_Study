// DP
// 2 x n Ÿ�ϸ�
// 2xn ũ���� ���簢���� ä��� ����� ���� 10007�� ���� �������� ����Ѵ�
// ���� ġȯ >> �Ǻ���ġ ����!
// f(n)�� ���� f(n-1) Ȥ�� f(n-2) * 2�̴�(2�� ������ ä�� �� �ִ� ����� ���� 2���� �̱� ����). 
// ��, f(n) = f(n-1) + 2 * f(n-2)
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

		//DP �ʱ�ȭ
		for (int i = 0; i < 12; i++) {
			DP[i] = 0;
		}
	}

	cout << DP[n];

	return 0;
}