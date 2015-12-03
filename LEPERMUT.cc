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
        for_each(a.begin(), a.end(), [](int& x) {
            cin >> x;
        });
        int inversions = 0;
        int local_inversions = 0;
        for (int l = 0; l < n; ++l)
            for (int m = l + 1; m < n; ++m)
                if (a[l] > a[m])
                    ++inversions;

        for (int l = 0; l < n-1; ++l)
            if (a[l] > a[l+1])
                ++local_inversions;

        if (inversions == local_inversions)	cout << "YES" << endl;
        else								cout << "NO" << endl;
    }

    return 0;
}
