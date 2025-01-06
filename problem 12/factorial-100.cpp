#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mod, count = 0;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        long long int fact = 1;
        int t;
        cin >> t;
        for (int j = 2; j <= t; j++)
        {
            fact *= j;
        }
        while (fact > 0)
        {
            mod = fact % 10;
            if (mod == 0)
            {
                count++;
            }
            else
                break;
            fact = fact / 10;
        }

        cout << fact << endl;
    }
}