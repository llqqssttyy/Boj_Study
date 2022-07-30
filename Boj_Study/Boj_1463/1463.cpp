// DP
// 메모제이션 방법을 사용해 중복 계산되는 값을 저장하여 효율을 높여준다.
// 피보나치 수열 dp 풀이 참조
// 보통 큰 수로 나눠서 수를 작게 만드는 것이 가장 적은 연산횟수를 갖는다 생각하지만
// 10의 경우는 10 -> 9 -> 3 -> 1을 만드는 방법이 최솟값이다.
// 정해진 최선의 연산 방법이 없기 때문에 모든 연산 방법(3가지)를 활용하면서 비교해봐야 한다. 이때 dp를 사용한다.
// dp를 top down 방식으로 재귀적으로 구현하면 콜스택 오버플로우를 일으킬 수 있다. 
// bottom up 방식으로 하면 for 로 dp 배열을 채워나갈 수 있다.
// 

#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

int DP[1000001];

int main() {
	int n;

	cin >> n;

	//1은 결과값이 0이므로 그냥 채워준다
	DP[1] = 0;

	//2부터 dp배열을 채워나간다. top down이기 떄문에 코드가 매우 간결해질 수 있다,,
	for (int i = 2; i <= n; i++) {
		DP[i] = DP[i - 1] + 1;
		
		if (i % 2 == 0) 
			DP[i] = min(DP[i], DP[i / 2] + 1);
		if (i % 3 == 0) 
			DP[i] = min(DP[i], DP[i / 3] + 1);
	}

	cout << DP[n] << endl;
	return 0;
}