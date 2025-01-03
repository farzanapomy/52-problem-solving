#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 1)
        {
            cout << "find max => " << a[i] << endl;
        }

        cout << "a[i]=> " << a[i] << endl;
    }
}
