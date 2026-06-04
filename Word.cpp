#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int upper = 0;
    int lower = 0;
    for (int i = 0; i < s.size(); i += 1)
    {
        if (isupper(s[i]))
            upper += 1;
        else
            lower += 1;
    }
    if (upper > lower)
    {
        for (int i = 0; i < s.size(); i += 1)
        {
            cout << char(toupper(s[i]));
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i += 1)
        {
            cout << char(tolower(s[i]));
        }
    }
}
