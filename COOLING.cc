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
        vector<int> pies(n), racks(n);
        auto reader = [](int& a) {
            cin >> a;
        };
        for_each(pies.begin(), pies.end(), reader);
        for_each(racks.begin(), racks.end(), reader);
        sort(pies.begin(), pies.end());
        sort(racks.begin(), racks.end());
        int res = 0;
        for (auto it_pies = pies.begin(), it_racks = racks.begin(), end_pies = pies.end(), end_racks = racks.end();
                it_pies != end_pies and it_racks != end_racks; ) {
            if (*it_pies <= *it_racks)  {
                ++it_pies;
                ++res;
            }

            ++it_racks;
        }

        cout << res << endl;
    }

    return 0;
}