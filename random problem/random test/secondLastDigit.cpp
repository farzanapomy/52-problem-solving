// https://www.codechef.com/problems/PHONEYR
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x0;
    cin >> x0;
    int y0 = x0 / 10;
    int z0 = y0 * 10;
    z0 = x0 - z0;
    int y1 = y0 / 10;
    int z1 = y1 * 10;
    z1 = y0 - z1;
    cout << "K" << z1 << z0 << endl;
}
