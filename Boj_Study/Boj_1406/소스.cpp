// 단방향 Linked list -> 시간초과 날 것 같다,,
// 배열 -> 시간초과 났음. 가운데 문자를 빼면 뒤에 문자들을 모조리 당겨와야하기 때문. 최악의 경우 O(n) 소요
// stack으로?  

#include <iostream>
#include <stack>
#include <string>

using namespace std;


int main(void) {
	stack<char> leftStack;
	stack<char> rightStack;

	string str = "";  // 처음 입력 받을 문장
	int num;	      // 명령의 수
	char order;		  // 명령어를 입력 받을 변수

	cin >> str;
	cin >> num;

	//입력 받은 문장을 leftStack에 모두 넣어주기
	for (int i = 0; i < str.size(); i++) {
		leftStack.push(str[i]);
	}

	//명령어 실행
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