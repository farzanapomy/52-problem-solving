#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x0 = 2024;
    int y0 = x0 / 10;
    int z0 = y0 * 10;
    z0 = x0 - z0;
    cout << x0 << " " << y0 << " " << z0 << endl;
    int y1 = y0 / 10; // 20
    int z1 = y1 * 10; //200
    z1 = y0 - z1;
    cout << x0 << " " << y0 << " " << z0 << " " << z1 << endl;
}