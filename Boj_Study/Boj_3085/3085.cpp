// Brute Force
// ������ ������ 4��, nxn�� �ǿ��� ��� ĭ�� ������ �� ĭ�� ���� ������ ��ȯ�Ѵ�.
// �迭�� ��� ���鼭 ���� �ٸ� ������ �ִ� case�� ���Ѵ�
// �ݺ����� case���� ����. �ٵ� ������ �����Ϸ���.. ������ ����� �迭�� �ִ� �� ���� �ʳ�?
//
//

#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

//
int check(vector<string>& a, int n) {
	int max = 0;
	int temp = 1;

	for (int i = 0; i < n; i++) {
		temp = 1;

		// ���ο�
		for (int j = 1; j < n; j++) {
			if (a[i][j] == a[i][j - 1])
				temp++;
			else
				temp = 1;
		}
		if (temp > max)
			max = temp;

		temp = 1;

		// ���ο�
		for (int j = 1; j < n; j++) {
			if (a[j][i] == a[j - 1][i])
				temp++;
			else
				temp = 1;
		}
		if (temp > max)
			max = temp;
	}

	return max;
}

int main() {
	int n = 0;
	int max = 0;
	int temp = 0;

	cin >> n;

	vector<string> bomboni(n);

	for (int i = 0; i < n; i++) {
		cin >> bomboni[i];
	}

	swap(bomboni[2][2], bomboni[2][3]);
	temp = check(bomboni, n);
	if (temp >= max) max = temp;
	swap(bomboni[2][2], bomboni[2][3]);

	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < n; j++) {
	//		//check right
	//		if (j < n - 1) {
	//			swap(bomboni[i][j], bomboni[i][j + 1]);
	//			temp = check(bomboni, n);
	//			if (temp >= max) max = temp;
	//			swap(bomboni[i][j], bomboni[i][j + 1]); // �ٽ� �����·� �ǵ�����
	//		}
	//		//check bottom
	//		if (i < n - 1) {
	//			swap(bomboni[i][j], bomboni[i + 1][j]);
	//			temp = check(bomboni, n);
	//			if (temp >= max) max = temp;
	//			swap(bomboni[i][j], bomboni[i + 1][j]); // �ٽ� �����·� �ǵ�����
	//		}
	//	}
	//}
	cout << max;

	return 0;
}