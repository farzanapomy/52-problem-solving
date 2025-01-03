#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                cout << "*";
            }
            cout << "*";
            cout << endl;
        }
        cout << endl;
    }
}