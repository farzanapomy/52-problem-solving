#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
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
        
        cout << fact << endl;
    }
}