// DP
// 2 x n Ÿ�ϸ�
// 2xn ũ���� ���簢���� ä��� ����� ���� 10007�� ���� �������� ����Ѵ�
// ���� ġȯ >> �Ǻ���ġ ����!
// f(n)�� ���� f(n-1) Ȥ�� f(n-2)�̴�. 
// ��, f(n) = f(n-1) + f(n-2)
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