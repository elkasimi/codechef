#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int n;
        cin >> n;
        double mink = ceil(0.25 * n);
        double maxk = floor(2.0 * n / 7.0);
        if (maxk >= mink) {
            int k = (int) maxk;
            cout << 7 * (4 * k - n) << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
