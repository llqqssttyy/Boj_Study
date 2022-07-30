// 후위 표기식2
// stack


#include <iostream>
#include <stack>
#include <vector>
#include <queue>

using namespace std;

int main() {
	string str;
	int n;

	cin >> n;
	cin >> str;

	vector<int> alphabet(n);

	for (int i = 0; i < n; i++) {
		cin >> alphabet[i];
	}

	stack<double> st;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
			double a = st.top();
			st.pop();
			double b = st.top();
			st.pop();

			switch (str[i]) {
			case '+':
				st.push(b + a);
				break;
			case '-':
				st.push(b - a);
				break;
			case '*':
				st.push(b * a);
				break;
			case '/':
				st.push(b / a);
				break;
				
			}
		}
		else {
			st.push(alphabet[str[i] - 'A']);
		}
	}

	double result = st.top();
	cout << fixed;
	cout.precision(2);
	cout << result << '\n';

	return 0;
}