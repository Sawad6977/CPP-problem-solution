/*#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, index = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < 3; j++)
        {

        }
    }
}
*/

#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    return 0;
}

int main()
{
    string infix;
    getline(cin, infix);

stack<char> st;
    for (int i = 0; i < infix.length(); i += 1)
    {
        char ch = infix[i];

        if (ch == ' ')
            continue;

        if (isalpha(ch))
            cout << ch;
        else if (ch == '(')
            st.push(ch);
        else if (ch == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                cout << st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop();
        }
        else
        {
            while (!st.empty() && st.top() != '(' && prec(st.top()) >= prec(ch))
            {
                cout << st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while (!st.empty())
    {
        if (st.top() != '(')
            cout << st.top();
        st.pop();
    }
    cout << endl;
}
/// (a+b)*((a-b)-(a-c)-(d+a)-((c-a)+(d-b))