//Stack
//stack�� �ܾ���� �ְ� ��� pop ���ָ� �ܾ� ������ ����
//�Է��� ���� �Է±��� ��� �ޱ� ���� getline ���
//�����忡 ���⸦ �ٿ����� ������ ��� pop �Ǳ� ���� �ݺ����� ���������Ƿ� �̸� �����ϱ� ���� ��ġ.


#include <iostream>
#include <stack>
#include <string>

using namespace std;


int main(void) {
	stack<char> stack;
	string str;
	string reversedStr;

	int t;

	cin >> t;
	cin.ignore();

	while (t != 0) {

		std::getline(cin, str);
		str += ' ';

		for (int i = 0; i < str.size(); i++) {

			if (str[i] == ' ') {
				while(!stack.empty()) {
					reversedStr += stack.top();
					stack.pop();
				}
				reversedStr += ' ';
			}
			else {
				stack.push(str[i]);
			}
		}

		cout << reversedStr << endl;
		reversedStr = "";
		t--;
	}


	return 0;
}