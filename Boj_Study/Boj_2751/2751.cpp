#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// �ð� ������ �����Ƿ� �ð� ���⵵�� O(n^2)���� ���� �˰����� ä���ؾ� �Ѵ�.
// �� ��Ʈ�� ��� �ұ�? �� ��Ʈ�� �־��� ���(�̹� ������ �Ǿ����� ��) �ð� ���⵵�� O(n^2)�̴�.
// �������� O(nlogn)�� �ð� ���⵵�� �����Ƿ� �������� ����غ���.


using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> vec;
	int vecSize = 0;
	int num = 0;

	cin >> vecSize;
	for (int i = 0; i < vecSize; i++) {
		cin >> num;
		vec.push_back(num);
	}

	make_heap(vec.begin(), vec.end());
	sort_heap(vec.begin(), vec.end());
	for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++) {
		cout << *iter << '\n';
	}

	return 0;
}