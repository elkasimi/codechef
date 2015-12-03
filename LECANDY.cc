#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int n, c;
        cin >> n >> c;
        vector<int> a(n);
        for_each(a.begin(), a.end(), [&a](int& x) {
            cin >> x;
        });

        if (accumulate(a.begin(), a.end(), 0, plus<int>()) <= c)	cout << "Yes" << endl;
        else														cout << "No" << endl;
    }

    return 0;
}
