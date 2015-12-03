#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 1; i <= t; ++i) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int j = 0; j < n; ++j) cin >> v[j];
        sort(v.begin(), v.end());
        int dmin = 1000000000;
        for (int j = 1; j < n; ++j) {
            dmin = min(dmin, v[j] - v[j-1]);
        }
        cout << dmin << endl;
    }

    return 0;
}