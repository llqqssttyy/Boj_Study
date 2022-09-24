#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void check(vector<string> &pb) {
	string result = "YES";

	for (int i = 0; i < pb.size() - 1; i++) {
		if (pb[i] == pb[i+1].substr(0, pb[i].size())) {
			result = "NO";
			break;
		}
	}
	cout << result << '\n';
	
	return;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<string> phoneBook;
	int t = 0; // test case
	int n = 0; // given number of phone number

	cin >> t;

	for (int test = 0; test < t; test++) {
		cin >> n;

		for (int i = 0; i < n; i++) {
			string pn;
			string answer;

			cin >> pn;
			phoneBook.push_back(pn);
		}

		sort(phoneBook.begin(), phoneBook.end());

		check(phoneBook);
		phoneBook.clear();
	}

	return 0;
}