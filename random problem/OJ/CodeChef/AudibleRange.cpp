#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num >= 67 && num <= 45000)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
}