#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int b[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    int s;
    cin >> s;
    while (s--)
    {
        int x, y;
        cin >> x >> y;
        if (x == 1)
        {
            b[x + 1] += b[x] - y;
            b[x] = 0;
        }
        else if (x > 1 && x < n)
        {
            b[x - 1] += y - 1;
            b[x + 1] += b[x] - y;

            b[x] = 0;
        }
        else
        {
            b[x - 1] += y - 1;
            b[x] = 0;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << b[i] << endl;
    }
    return 0;
}