#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, flag = 0;
        cin >> N;
        for (int j = 0; j * j <= N; j++)
        {
            if (j * j == N)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}