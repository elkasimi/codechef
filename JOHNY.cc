#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; ++j) cin >> a[j];
        int k;
        cin >> k;
        int val = a[k-1];
        auto c = count_if(a.begin(), a.end(), [&] (int x) {
            return x < val;
        });
        cout << c+1 << endl;
    }

    return 0;
}