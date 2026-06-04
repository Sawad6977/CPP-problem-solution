#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    set<char> user;
    for (int i = 0; i < s.size(); i++)
    {
        user.insert(s[i]);
    }
    if (user.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}

