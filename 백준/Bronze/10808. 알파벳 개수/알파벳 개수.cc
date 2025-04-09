#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(string s)
{
	vector<int> alphabetCount(26, 0);

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			alphabetCount[s[i] - 'a']++;
		}
	}

	return alphabetCount;
}

int main()
{
	string s;
	cin >> s;

	vector<int> result = solution(s);

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i];
		if(i != result.size() - 1)
			cout << " ";
	}
	cout << '\n';
	return 0;
}