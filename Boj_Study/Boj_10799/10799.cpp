// 쇠막대기
// 레이저가 나타났을 때 스택에 몇개가 쌓여있느냐를 보면 잘린 스틱의 개수를 알 수 있음
// 스택에서 pop 될 때, 즉 스틱이 끝날 때 한개가 더해져야 함.
// 레이저의 수 + 1이 잘려진 막대의 개수이기 때문
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