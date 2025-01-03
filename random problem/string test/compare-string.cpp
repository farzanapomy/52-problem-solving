//  Lexicographical Comparison
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << "Equal" << endl;
    }
    else if (a < b)
    {
        cout << "A is Smaller" << endl;
    }
    else
    {
        cout << "B is Smaller" << endl;
    }

    return 0;
}
