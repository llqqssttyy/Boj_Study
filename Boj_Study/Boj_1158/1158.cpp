// 요세푸스 문제
// 요소를 전부 queue에 push
// k의 배수가 되기 전까진 요소를 pop, push 반복
// k의 배수번째 요소는 pop만.
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

	// 요소를 전부 queue에 push
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