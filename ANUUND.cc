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
        sort(a.begin(), a.end());
        bool forward = true;
        bool first = true;
        for (int m = 0, M = n-1; m <= M; ) {
            if (first)	first = false;
            else		cout << " ";
            if (forward) {
                cout << a[m++];
                forward = false;
            } else {
                cout << a[M--];
                forward = true;
            }
        }
        cout << endl;
    }
    return 0;
}
