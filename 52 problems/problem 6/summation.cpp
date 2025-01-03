#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;

    while (n--)
    {
        int t;
        cin >> t;
        int mod = t % 10;
        int v = t / 10000;
        sum = mod + v;
        cout << "Sum = " << sum << endl;
    }

    return 0;
}