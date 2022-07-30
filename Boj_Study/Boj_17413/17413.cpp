//Stack
// �ܾ� ������
// stack�� �ܾ���� �ְ� ��� pop ���ָ� �ܾ� ������ ����
// �Է��� ���� �Է±��� ��� �ޱ� ���� getline ���
// �����忡 ���⸦ �ٿ����� ������ ��� pop �Ǳ� ���� �ݺ����� ���������Ƿ� �̸� �����ϱ� ���� ��ġ.

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void) {
	stack<char> stack;
	string str;
	string reversedStr;

	bool isTag = false;


	std::getline(cin, str);
	str += ' ';

	//�ܾ� �������ֱ�
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '<') {
			isTag = true;
		}
		else if (str[i] == '>') {
			isTag = false;
			reversedStr += '>';
			continue;
		}

		// �±װ� �ƴ� ��쿡 �ܾ� �������ֱ�
		if (!isTag) {
			if (str[i] == ' ') {
				while (!stack.empty()) {
					reversedStr += stack.top();
					stack.pop();
				}
				reversedStr += ' ';
			}
			else {
				stack.push(str[i]);
			}
		}
		else {
			if (str[i] == '<') {
				while (!stack.empty()) {
					reversedStr += stack.top();
					stack.pop();
				}
			}
			reversedStr += str[i];
		}
	}

	cout << reversedStr << endl;
	reversedStr = "";

	return 0;
}