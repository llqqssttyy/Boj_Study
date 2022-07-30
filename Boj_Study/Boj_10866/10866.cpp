// µ¦
// 
// 

#include <iostream>
#include <stack>
#include <queue>
#include <string>

using namespace std;


int main(void) {
	deque<int> dq;

	int num;
	string order;
	cin >> num;

	for (int i = 0; i < num; i++) {
		int n;
		cin >> order;

		if (order == "push_back") {
			cin >> n;
			dq.push_back(n);
		}
		else if (order == "push_front") {
			cin >> n;
			dq.push_front(n);
		}
		else if (order == "pop_front") {
			if (!dq.empty()) {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
			else
				cout << "-1" << '\n';
		}
		else if (order == "pop_back") {
			if (!dq.empty()) {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
			else
				cout << "-1" << '\n';
		}
		else if (order == "size") {
			cout << dq.size() << "\n";
		}
		else if (order == "empty") {
			if (dq.empty())
				cout << "1" << '\n';
			else
				cout << "0" << '\n';
		}
		else if (order == "front") {
			if (dq.empty())
				cout << "-1" << '\n';
			else
				cout << dq.front() << '\n';
		}
		else if (order == "back") {
			if (dq.empty())
				cout << "-1" << '\n';
			else
				cout << dq.back() << '\n';
		}
	}

	return 0;
}