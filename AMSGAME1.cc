#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int gcd(int a, int b) {
    if (a == 0)	return b;
    else 		return gcd(b%a, a);
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; ++j) cin >> a[j];
        cout << accumulate(a.begin(), a.end(), 0, gcd) << endl;
    }

    return 0;
}