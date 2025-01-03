#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, r1, r2;
    double ball;
    cin >> t;
    while (t--)
    {
        cin >> r1 >> r2 >> ball;
        double run_count = (r1 - r2) + 1;
        double expected_run_rate = run_count / (ball / 6);
        double remain_ball = 300 - ball;
        double current_over = remain_ball / 6;
        double currentRunRate = r2 / current_over;
        cout << fixed << setprecision(2) << currentRunRate << " " << expected_run_rate << endl;
    }
}
