// Brute Force
// 사탕의 종류는 4개, nxn의 판에서 어느 칸의 인접한 두 칸을 고르고 사탕을 교환한다.
// 배열을 모두 돌면서 옆에 다른 사탕이 있는 case를 구한다
// 반복문을 case동안 돌림. 근데 빠르게 접근하려면.. 정보가 저장된 배열이 있는 게 좋지 않나?
//
//

#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

//
int check(vector<string>& a, int n) {
	int max = 0;
	int temp = 1;

	for (int i = 0; i < n; i++) {
		temp = 1;

		// 세로열
		for (int j = 1; j < n; j++) {
			if (a[i][j] == a[i][j - 1])
				temp++;
			else
				temp = 1;
		}
		if (temp > max)
			max = temp;

		temp = 1;

		// 가로열
		for (int j = 1; j < n; j++) {
			if (a[j][i] == a[j - 1][i])
				temp++;
			else
				temp = 1;
		}
		if (temp > max)
			max = temp;
	}

	return max;
}

int main() {
	int n = 0;
	int max = 0;
	int temp = 0;

	cin >> n;

	vector<string> bomboni(n);

	for (int i = 0; i < n; i++) {
		cin >> bomboni[i];
	}

	swap(bomboni[2][2], bomboni[2][3]);
	temp = check(bomboni, n);
	if (temp >= max) max = temp;
	swap(bomboni[2][2], bomboni[2][3]);

	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < n; j++) {
	//		//check right
	//		if (j < n - 1) {
	//			swap(bomboni[i][j], bomboni[i][j + 1]);
	//			temp = check(bomboni, n);
	//			if (temp >= max) max = temp;
	//			swap(bomboni[i][j], bomboni[i][j + 1]); // 다시 원상태로 되돌리기
	//		}
	//		//check bottom
	//		if (i < n - 1) {
	//			swap(bomboni[i][j], bomboni[i + 1][j]);
	//			temp = check(bomboni, n);
	//			if (temp >= max) max = temp;
	//			swap(bomboni[i][j], bomboni[i + 1][j]); // 다시 원상태로 되돌리기
	//		}
	//	}
	//}
	cout << max;

	return 0;
}