#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int a[n];
    while (n--)
    {
        cin >> a[n];
        sum += a[n];
    }
    cout << sum << endl;
}