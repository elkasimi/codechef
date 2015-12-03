#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int t;

    cin >> t;

    for (int i = 1; i <= t; ++i) {
        int n, m;
        cin >> n >> m;

        unordered_set<int> s;
        bool ok = false;
        for (int j = 0; j < n; ++j) {
            int b;
            cin >> b;
            if (!ok) {
                unordered_set<int> tmp;
                for (int a : s) tmp.insert(a + b);
                s.insert(b);
                s.insert(tmp.begin(), tmp.end());
                ok = (s.find(m) != s.end());
            }
        }

        /*
        for (int a : s) cerr << a << " ";
        cerr << endl;
        */

        if (!ok) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }

    }
}