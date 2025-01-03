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
        int root = sqrt(N);
        root *root == N ? flag = 1 : flag = 0;
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}