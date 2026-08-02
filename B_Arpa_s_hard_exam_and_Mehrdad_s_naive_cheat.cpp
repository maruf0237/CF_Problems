#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int rem = n % 4;
    if (n == 0)
        cout << 1;
    else if (rem == 1)
        cout << 8;
    else if (rem == 2)
        cout << 4;
    else if (rem == 3)
        cout << 2;
    else
        cout << 6; // rem == 0
    return 0;
}