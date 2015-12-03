#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        vector<int> scores(11);
        for_each(scores.begin(), scores.end(), [&](int& a) {
            cin >> a;
        });
        int k;
        cin >> k;
        sort(scores.begin(), scores.end(), greater<int>());
        int max_sum = accumulate(scores.begin(), scores.begin() + k, 0, plus<int>());
        int u = count(scores.begin(), scores.begin() + k, scores[k-1]);
        int v = count(scores.begin(), scores.end(), scores[k-1]);
        u = min(u, v - u);
        int res = 1;
        for (int j = 0; j < u; ++j) {
            res *= v - j;
            res /= j + 1;
        }
        cout << res << endl;
    }
    return 0;
}