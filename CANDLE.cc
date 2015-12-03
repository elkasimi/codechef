#include <iostream>
#include <vector>

using namespace std;


int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        vector<int> v(10);
        for (int j = 0; j < 10; ++j) {
            cin >> v[j];
        }
        int mind = v[0] + 1;
        int minj = 0;
        for (int j = 1; j < 10; ++j) {
            if (mind > v[j]) {
                mind = v[j];
                minj = j;
            }
        }

        int res;

        if (minj != 0) {
            res = 0;
            for (int j = 0; j <= mind; ++j) res = 10 * res + minj;
        } else {
            res = 1;
            for (int j = 0; j < mind; ++j) res = 10 * res;
        }

        cout << res << endl;
    }
    return 0;
}
