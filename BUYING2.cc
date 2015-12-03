#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int j = 0; j < n; ++j) cin >> a[j];
        auto sum = accumulate(a.begin(), a.end(), 0, [](int v, int w) {
            return v + w;
        });
        //cerr << "sum=" << sum << endl;
        int q = sum / x;
        bool ok = all_of(a.begin(), a.end(), [&](int o) {
            return ((sum - o) / x) != q;
        });

        if (ok)	cout << q << endl;
        else	cout << -1 << endl;
    }

    return 0;
}
