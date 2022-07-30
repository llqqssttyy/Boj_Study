// Ä«µå2
// Queue
// 

#include <iostream>
#include <stack>
#include <queue>
#include <string>

using namespace std;

int main(void) {
	queue<int> queue;

	int n;
	int temp;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		queue.push(i);
	}

	while (queue.size() != 1) {
		queue.pop();

		if (queue.size() == 1)
			break;
		
		temp = queue.front();
		queue.pop();
		queue.push(temp);
	}

	cout << queue.front();

	return 0;
}