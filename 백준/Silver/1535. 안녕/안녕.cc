#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxJoy = 0;

void dfs(int index, int hp, int joy, const vector<int>& L, const vector<int>& J)
{
	if (hp <= 0) return;

	if (index == L.size())
	{
		maxJoy = max(maxJoy, joy);
		return;
	}

	dfs(index + 1, hp, joy, L, J);
	dfs(index + 1, hp - L[index], joy + J[index], L, J);
}

int main()
{
	int n;
	cin >> n;
	vector<int> L(n);
	vector<int> J(n);
	for (int i = 0; i < L.size(); i++) cin >> L[i];
	for (int i = 0; i < J.size(); i++) cin >> J[i];

	dfs(0, 100, 0, L, J);

	cout << maxJoy << '\n';
	return 0;
}