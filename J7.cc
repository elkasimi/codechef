#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int p, s;
        cin >> p >> s;

        double x = (sqrt(0.25 * p * p - 6.0 * s) + 0.25 * p) / 3.0;
        double y = 0.125 * p - 0.5 * x;
        double z = y;
        double area = x * y * z;

        cout.precision(2);
        cout.setf(ios::fixed);

        cout << area << endl;
    }

    return 0;
}
