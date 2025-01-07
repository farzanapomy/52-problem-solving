#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x0 = 501;
    // method 1
    int newX = x0 / 10;
    newX = newX * 10;
    int y0 = x0 - newX;
    // method 2
    // int y0 = x0 - (x0 / 10) * 10;
    // method 3
    // int y0 = x0 % 10;
    cout << "The result is : " << y0 << endl;
}