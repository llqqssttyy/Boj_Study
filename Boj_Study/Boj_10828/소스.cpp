//Stack

#include <iostream>
#include <stack>
#include <string>

using namespace std;


int main(void) {
	stack<int> stack;

	int getNum;
	int num;
	int temp = 0;

	string order;

	cin >> getNum;

	for (int i = 0; i < getNum; i++) {
		cin >> order;
		if (order == "push") {
			cin >> num;
			stack.push(num);
		}
		else if (order == "pop") {
			if (!stack.empty()) {
				cout << stack.top() << endl;
				stack.pop();
			}
			else
				cout << "-1" << endl;
		}
		else if (order == "size") {
			cout << stack.size() << endl;
		}
		else if (order == "empty") {
			if (stack.empty())
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
		else if (order == "top") {
			if (!stack.empty())
				cout << stack.top() << endl;
			else
				cout << "-1" << endl;
		}
	}

	return 0;
}