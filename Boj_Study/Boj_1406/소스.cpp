// �ܹ��� Linked list -> �ð��ʰ� �� �� ����,,
// �迭 -> �ð��ʰ� ����. ��� ���ڸ� ���� �ڿ� ���ڵ��� ������ ��ܿ;��ϱ� ����. �־��� ��� O(n) �ҿ�
// stack����?  

#include <iostream>
#include <stack>
#include <string>

using namespace std;


int main(void) {
	stack<char> leftStack;
	stack<char> rightStack;

	string str = "";  // ó�� �Է� ���� ����
	int num;	      // ����� ��
	char order;		  // ��ɾ �Է� ���� ����

	cin >> str;
	cin >> num;

	//�Է� ���� ������ leftStack�� ��� �־��ֱ�
	for (int i = 0; i < str.size(); i++) {
		leftStack.push(str[i]);
	}

	//��ɾ� ����
	for (int i = 0; i < num; i++) {
		cin >> order;

		if (order == 'L') {
			if (!leftStack.empty()) {
				rightStack.push(leftStack.top());
				leftStack.pop();
			}
		}
		else if (order == 'D') {
			if (!rightStack.empty()) {
				leftStack.push(rightStack.top());
				rightStack.pop();
			}
		}
		else if (order == 'B') {
			if (!leftStack.empty())
				leftStack.pop();
		}
		else if (order == 'P') {
			char character;
			cin >> character;
			leftStack.push(character);
		}
	}

	if (!leftStack.empty()) {
		while (leftStack.size() != 0) {
			rightStack.push(leftStack.top());
			leftStack.pop();
		}
	}

	while (!rightStack.empty()) {
		cout << rightStack.top();
		rightStack.pop();
	}

	return 0;
}