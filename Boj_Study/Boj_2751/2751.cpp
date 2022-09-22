#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// 시간 제한이 있으므로 시간 복잡도가 O(n^2)보다 나은 알고리즘을 채택해야 한다.
// 퀵 소트를 써야 할까? 퀵 소트는 최악의 경우(이미 정렬이 되어있을 때) 시간 복잡도는 O(n^2)이다.
// 힙정렬은 O(nlogn)의 시간 복잡도를 가지므로 힙정렬을 사용해보자.


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