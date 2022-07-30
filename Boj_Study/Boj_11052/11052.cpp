// DP
// 카드 구매하기
// 
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
	int tmp = 0;

	cin >> n;

	vector<int> price(n+1, 0);    //가격을 입력 받는 배열
	vector<int> maxPrice(n+1, 0); //DP

	for (int i = 1; i < n+1; i++) {
		cin >> price[i];
	}

	maxPrice[1] = price[1];

	//bottom-up
	for (int i = 2; i <= n; i++) {
		tmp = max(maxPrice[i - 1] + price[1], price[i]);

		for (int j = 1; j <= i / 2; j++) {
			tmp = max(tmp, price[j] + maxPrice[i - j]);
		}

		maxPrice[i] = tmp;
	}

	cout << maxPrice[n];

	return 0;
}