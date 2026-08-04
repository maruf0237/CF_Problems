#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> x(n);

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < n; i++)
    {
        int mn, mx;

        if (i == 0)
            mn = x[1] - x[0];
        else if (i == n - 1)
            mn = x[n - 1] - x[n - 2];
        else
            mn = min(x[i] - x[i - 1], x[i + 1] - x[i]);

        mx = max(x[i] - x[0], x[n - 1] - x[i]);

        cout << mn << " " << mx << endl;
    }

    return 0;
}