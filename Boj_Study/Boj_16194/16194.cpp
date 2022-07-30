// DP
// 카드 구매하기
// 최소금액으로 구매하기
// 

#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;


int main() {
	int n;

	cin >> n;

	vector<int> price(n + 1, 10000);    //가격을 입력 받는 배열
	vector<int> minPrice(n + 1, 10000); //DP

	for (int i = 1; i < n + 1; i++) {
		cin >> price[i];
	}

	minPrice[1] = price[1];

	//bottom-up
	for (int i = 2; i <= n; i++) {
		minPrice[i] = price[i];
		for (int j = 1; j <= i / 2; j++) {
			minPrice[i] = min(minPrice[i], price[j] + minPrice[i - j]);
		}
	}

	cout << minPrice[n];

	return 0;
}