// Brute Force
// 아홈 난쟁이 중 진짜 난쟁이 일곱명을 찾아라.
// 9명 중 가짜 난쟁이 2명만 찾으면 되므로 경우의 수는 9C2 == 36
// 별로 많지 않으니까 브루트 포스로 풀기 가능.
// 

#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;


int main() {
	vector<int> heights(10);
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> heights[i];
		sum += heights[i];
	}

	sort(heights.begin(), heights.end()-1);

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - heights[i] - heights[j] == 100) {
				for (int k = 0; k < 9; k++) {
					if (k != i && k != j) {
						cout << heights[k] << "\n";
					}
				}
				return 0;
			}
		}
	}
	return 0;
}