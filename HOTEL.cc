#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        vector<int> guests(1001, 0);
        int n;
        cin >> n;
        vector<int> arrivals(n), departures(n);
        auto reader = [](int& a) {
            cin >> a;
        };
        for_each(arrivals.begin(), arrivals.end(), reader);
        for_each(departures.begin(), departures.end(), reader);
        for (int l = 0; l < n; ++l) {
            for (int m = arrivals[l]; m < departures[l]; ++m) {
                guests[m]++;
            }
        }
        cout << *max_element(guests.begin(), guests.end()) << endl;
    }

    return 0;
}