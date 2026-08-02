#include <bits/stdc++.h>
using namespace std;
int main()
{
    char d;
    cin >> d;
    string s;
    cin >> s;

    string key = {"qwertyuiopasdfghjkl;zxcvbnm,./"};

    for (int i = 0; i < s.size(); i++)
    {
        int p = key.find(s[i]);
        if (d == 'R')
        {
            cout << key[p - 1];
        }
        else
        {
            cout << key[p + 1];
        }
    }

    return 0;
}