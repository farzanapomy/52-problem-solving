#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, n1, t, t1;
    cin >> n >> t >> n1 >> t1;

    long long pow1 = pow(n, t);
    long long pow2 = pow(n1, t1);
    if (pow1 < pow2)
        cout << "First one is small" << endl;
    else
        cout << "Second one is small" << endl;

    return 0;
}
