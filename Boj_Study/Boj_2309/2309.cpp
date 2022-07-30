// Brute Force
// ��Ȩ ������ �� ��¥ ������ �ϰ����� ã�ƶ�.
// 9�� �� ��¥ ������ 2�� ã���� �ǹǷ� ����� ���� 9C2 == 36
// ���� ���� �����ϱ� ���Ʈ ������ Ǯ�� ����.
// 

#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;


int main() {
	vector<int> heights(10);
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> heights[i];
		sum += heights[i];
	}

	sort(heights.begin(), heights.end()-1);

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - heights[i] - heights[j] == 100) {
				for (int k = 0; k < 9; k++) {
					if (k != i && k != j) {
						cout << heights[k] << "\n";
					}
				}
				return 0;
			}
		}
	}
	return 0;
}