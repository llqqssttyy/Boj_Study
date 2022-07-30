// �似Ǫ�� ����
// ��Ҹ� ���� queue�� push
// k�� ����� �Ǳ� ������ ��Ҹ� pop, push �ݺ�
// k�� �����° ��Ҵ� pop��.
// 

#include <iostream>
#include <stack>
#include <queue>
#include <string>

using namespace std;


int main(void) {
	queue<int> qu;
	int n, k;
	int temp;
	int i = 1;

	cin >> n >> k;

	// ��Ҹ� ���� queue�� push
	for (int i = 1; i <= n; i++) {
		qu.push(i);
	}

	cout << "<";
	while (!qu.empty()) {
		temp = qu.front();

		if ((i % k) != 0) {
			qu.pop();
			qu.push(temp);
		}
		else {
			if (qu.size() == 1)
				cout << temp;
			else
				cout << temp << ", ";

			qu.pop();
		}
		i++;
	}
	cout << ">";

	return 0;
}