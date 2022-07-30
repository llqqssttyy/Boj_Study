//Stack
//stack에 단어들을 넣고 모두 pop 해주면 단어 뒤집기 가능
//입력은 공백 입력까지 모두 받기 위해 getline 사용
//원문장에 띄어쓰기를 붙여주지 않으면 모두 pop 되기 전에 반복문이 끝나버리므로 이를 방지하기 위해 조치.


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