// Brute Force
// ��Ʈ����ũ
// �κм����� ��
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

	int sum = 0;	//Ư�� �κм����� ��
	int cnt = 0;	// ������ �����ϴ� �κм����� ����

	cin >> n >> s;

	vector<int> a(n);

	//���� ���� �ޱ�
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//�κм����� �� ���ϱ�
	for (int i = 1; i < (1 << n); i++) {	// �κм����� ���� ��.
		sum = 0;

		for (int k = 0; k < n; k++) {
			// �κм������� k��° ���Ұ� �ִ��� Ȯ��
			if (i & (1 << k)) {
				sum += a[k];
			}
		}

		//���� s�� ������ ���� + 1
		if (sum == s) {
			cnt += 1;
		}
	}

	cout << cnt;


	return 0;
}