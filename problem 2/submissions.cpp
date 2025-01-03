#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char str[110];
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        int len = strlen(str);
        if (str[len - 1] % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }

    return 0;
}