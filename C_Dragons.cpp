#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> dragon;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        dragon.push_back({x, y});
    }
    sort(dragon.begin(), dragon.end());
    for (int i = 0; i < n; i++)
    {
        if (s > dragon[i].first)
        {
            s += dragon[i].second;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}