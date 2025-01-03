#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, r1, r2, ball;
    cin >> t;
    while (t--)
    {
        cin >> r1 >> r2 >> ball;
        double remain_ball = 300 - ball;
        double current_over = remain_ball / 6.00;
        double currentRunRate = r2 / current_over;
        double expected_run_rate;
        if (r1 < r2)
            expected_run_rate = 0.0;
        else
        {
            double run = (r1 - r2) + 1;
            expected_run_rate = run / (ball / 6.00);
        }
        cout << fixed << setprecision(2) << currentRunRate << " " << expected_run_rate << endl;
    }
}
