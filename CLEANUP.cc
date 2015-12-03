#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int n, m;
        cin >> n >> m;

        set<int> s;
        for (int j = 1; j <= n; ++j) {
            s.insert(j);
        }

        for (int j = 1; j <= m; ++j) {
            int job;
            cin >> job;
            s.erase(job);
        }

        bool first = true;
        int c = 0;
        std::for_each(s.begin(), s.end(), [&](int job) {
            ++c;
            if (c % 2 == 0) return;
            if (first) first = false;
            else std::cout << " ";

            cout << job;
        });
        cout << endl;

        first = true;
        c = 0;
        std::for_each(s.begin(), s.end(), [&](int job) {
            ++c;
            if (c % 2 == 1) return;
            if (first) first = false;
            else std::cout << " ";

            cout << job;
        });
        cout << endl;

    }

    return 0;
}
