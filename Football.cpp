#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int index = 1;
    bool dangerous = false;

    for (int i = 0; i < s.size() - 1; i += 1)
    {
        if (s[i] == s[i + 1])
        {
            index++;
            if (index == 7)
            {
                dangerous = true;
                break;
            }
        }
        else
        index = 1;
    }
    if (dangerous)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}