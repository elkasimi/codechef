#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int n;
        cin >> n;
        vector<int> speeds(n);
        for (int j = 0; j < n; ++j) cin >> speeds[j];
        int max_speed = numeric_limits<int>::max();
        int res = 0;
        bool first = true;
        for (int speed : speeds) {
            if (speed < max_speed or first) ++res;
            max_speed = min(max_speed, speed);
            if (first) first = false;
        }
        cout << res << endl;
    }

    return 0;
}