#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> coins(n);
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
        total += coins[i];
    }

    sort(coins.begin(), coins.end(), greater<int>());

    int mySum = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        mySum += coins[i];
        cnt++;

        if (mySum > total - mySum)
        {
            cout << cnt;
            break;
        }
    }

    return 0;
}