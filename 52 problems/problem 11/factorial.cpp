#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin >> n;
    cin.ignore();
    while (n--)
    {
        long long int fact = 1;
        int t;
        cin >> t;
        for (int i = 2; i <= t; i++)
        {
            fact *= i;
        }
        cout << fact << endl;
    }
}