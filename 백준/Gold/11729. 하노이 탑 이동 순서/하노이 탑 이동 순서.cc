#include <iostream>

using namespace std;

void hanoi(int n, int a, int b, int c)
{
	if (n == 1)
	{
		cout << a << " " << b << "\n";
		return;
	}

	hanoi(n - 1, a, c, b);

	cout << a << " " << b << "\n";

	hanoi(n - 1, c, b, a);
}

int main()
{
	int N;
	cin >> N;

	cout << (1 << N) - 1 << "\n";

	hanoi(N, 1, 3, 2);
	return 0;
}