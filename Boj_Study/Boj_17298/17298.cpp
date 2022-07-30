// 17298 ��ū��
// �迭 ��ġ�� �ϸ� O(n^2)�� �ð����⵵
// �����ʿ� �ִ� == stack�� ���ʿ� �ִ�.
// ���ʺ��� �˻��Ͽ� ���ÿ� ����� �ε����� �ش��ϴ� ���Ұ� �˻��ϴ� ���Һ��� ũ�ٸ� 
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