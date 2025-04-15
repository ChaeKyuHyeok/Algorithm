#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool isConsistent(vector<string>& phoneNumbers)
{
    sort(phoneNumbers.begin(), phoneNumbers.end());

    for (int i = 0; i < phoneNumbers.size() - 1; i++)
    {
        if (phoneNumbers[i + 1].substr(0, phoneNumbers[i].size()) == phoneNumbers[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<string> phoneNumbers(n);
        for (int i = 0; i < n; i++)
        {
            cin >> phoneNumbers[i];
        }

        if (isConsistent(phoneNumbers))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}