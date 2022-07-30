// Brute Force
// ��Ʈ����ũ
// ��ŸƮ�� ��ũ
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
	int min = 100;
	int n = 0;
	//���� �ӽ� ����
	int t1 = 0;
	int t2 = 0;

	cin >> n;

	int playerStat[20][20];

	//�ɷ�ġ �Է�
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> playerStat[i][j];
		}
	}

	for (int s = 0; s < (1 << n); s++) {
		vector<int> start, link;
		for (int k = 0; k < n; k++) {
			if (s & (1 << k)) {
				start.push_back(k);
			}
			else {
				link.push_back(k);
			}
		}
		//�ݹ� �������� �ʾ����� �н�
		if (start.size() != n / 2) continue;

		t1 = 0;
		t2 = 0;

		for (int i = 0; i < n / 2; i++) {
			for (int j = 0; j < n / 2; j++) {
				if (i == j) continue;		// (n, n)�� ��� �н�
				t1 += playerStat[start[i]][start[j]];
				t2 += playerStat[link[i]][link[j]];
			}
		}

		int diff = 0;
		diff = t1 <= t2 ? (t2 - t1) : (t1 - t2);

		if (diff <= min) min = diff;
	}

	cout << min;

	return 0;
}