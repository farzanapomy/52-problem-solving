#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        bool isFounded = true;
        for (int i = 2; i <= t - 1; i++)
        {
            if (t % i == 0)
            {
                isFounded = false;
            }
        }
        if (t == 1)
        {
            cout << "No" << endl;
        }
        
        if (isFounded == true)
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
    }
}