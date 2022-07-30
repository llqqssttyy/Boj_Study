// 17298 오큰수
// 배열 박치기 하면 O(n^2)의 시간복잡도
// 오른쪽에 있다 == stack의 위쪽에 있다.
// 앞쪽부터 검사하여 스택에 저장된 인덱스에 해당하는 원소가 검사하는 원소보다 크다면 
//

#include <iostream>
#include <stack>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> arr(n + 1);
	stack<int> st;
	vector<int> nge(n + 1, -1);

	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i <= n; i++)
	{
		while (!st.empty() && arr[st.top()] < arr[i])
		{
			nge[st.top()] = arr[i];
			st.pop();
		}
		st.push(i);
	}

	for (int i = 1; i <= n; i++)
	{
		cout << nge[i] << ' ';
	}
	cout << '\n';

	return 0;
}