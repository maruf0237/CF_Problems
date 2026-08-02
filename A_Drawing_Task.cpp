#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, t;
    cin >> n >> m >> t;

    vector<vector<char>> v(n, vector<char>(m, '.'));

    while (t--)
    {
        int r1, c1, r2, c2;
        char c;

        cin >> r1 >> c1 >> r2 >> c2 >> c;
        if (r1 > r2)
            swap(r1, r2);
        if (c1 > c2)
            swap(c1, c2);

        for (int i = r1 - 1; i <= r2 - 1; i++)
        {
            for (int j = c1 - 1; j <= c2 - 1; j++)
            {
                v[i][j] = c;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j];
        }
        cout << endl;
    }

    return 0;
}