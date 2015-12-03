#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        string s;
        cin >> s;
        unordered_map<char, int> m1, m2;
        int len = (int) s.size();
        int mid = len / 2;
        if (len % 2 == 0) {
            sort(s.begin(), s.begin() + len / 2);
            sort(s.begin() + mid, s.end());
            if (equal(s.begin(), s.begin() + mid, s.begin() + mid))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        } else {
            sort(s.begin(), s.begin() + mid);
            sort(s.begin() + mid + 1, s.end());
            if (equal(s.begin(), s.begin() + mid, s.begin() + mid + 1))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}