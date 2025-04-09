#include <iostream>
#include <numeric>

using namespace std;

int findYear(int M, int N, int x, int y)
{
	int lcmN = lcm(M, N);

	for (int i = x; i <= lcmN; i += M)
	{
		if ((i - 1) % N + 1 == y) return i;
	}
	return -1;
}

int main()
{
	int T, M, N, x, y;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> M >> N >> x >> y;
		cout << findYear(M, N, x, y) << '\n';
	}
	return 0;
}