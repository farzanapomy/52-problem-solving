#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        cout << "Case " << i + 1 << ":" << " ";
        if (n1 <= n2 and n1 <= n3)
        {
            n2 <= n3 ? cout << n1 << " " << n2 << " " << n3 << endl : cout << n1 << " " << n3 << " " << n2 << endl;
        }
        else if (n2 <= n1 and n2 <= n3)
        {
            n1 <= n3 ? cout << n2 << " " << n1 << " " << n3 << endl : cout << n2 << " " << n3 << " " << n1 << endl;
        }
        else
        {
            n1 <= n2 ? cout << n3 << " " << n1 << " " << n2 << endl : cout << n3 << " " << n2 << " " << n1 << endl;
        }
    }
}