#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, d;
    cin >> n >> b >> d;
    int cnt = 0;
    int jar = 0;
    while (n--)
    {
        int a;
        cin >> a;
        if (a <= b)
        {
            jar += a;

            if (jar > d)
            {
                cnt++;
                jar = 0;
            }
        }
    }
    cout << cnt;
    return 0;
}