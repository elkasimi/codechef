#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        string s;
        cin >> s;
        map<char, int> m;
        for_each(s.begin(), s.end(), [&](char c) {
            m[c]++;
        });

        int res = accumulate(m.begin(), m.end(), 0, [](int a, const pair<char, int>& p) {
            return a + (p.second + 1) / 2;
        });

        cout << res << endl;
    }

    return 0;
}
