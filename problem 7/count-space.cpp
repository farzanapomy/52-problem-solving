#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, str);
        int count = 1;
        for (int j = 0; j < str.size(); j++)
        {
            if (str[j] == ' ' and str[j + 1] != ' ')
            {
                count++;
            }
        }

        cout << count << endl;
    }
}