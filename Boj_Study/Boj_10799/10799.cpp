// �踷���
// �������� ��Ÿ���� �� ���ÿ� ��� �׿��ִ��ĸ� ���� �߸� ��ƽ�� ������ �� �� ����
// ���ÿ��� pop �� ��, �� ��ƽ�� ���� �� �Ѱ��� �������� ��.
// �������� �� + 1�� �߷��� ������ �����̱� ����
// 

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void) {
	stack<char> stack;

	string str;
	int cnt = 0;

	cin >> str;
	str += " ";

	for (int i = 0; i < str.size()-1; i++) {
		if (str[i] == '(') {
			if (str[i+1] == ')') {
				cnt += stack.size();
				i++;
				continue;
			}

			stack.push('(');
		}
		else if (str[i] == ')') {
			stack.pop();
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}