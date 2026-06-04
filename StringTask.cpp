#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word, result = "";
    cin >> word;
    for (int i = 0; i < word.size(); i += 1)
    {
        char letter = tolower(word[i]);
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'y')
        {
            continue;
        }
        else
        {
            result += ".";
            result += letter;
        }
    }
    cout << result << endl;
}