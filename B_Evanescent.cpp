#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int comp = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                comp++;
        }

        int ans = INT_MAX;

        for (int i = 1; i <= n - 2; i++)
        {
            int cur = comp;

            if (s[i - 1] != s[i])
                cur--;

            if (s[i] != s[i + 1])
                cur--;

            if (s[i - 1] != s[i + 1])
                cur++;

            ans = min(ans, cur);
        }

        cout << ans << endl;
    }

    return 0;
}