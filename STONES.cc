#include <iostream>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string a, b;
        cin >> a >> b;
        unordered_set<char> s;
        for_each(a.begin(), a.end(), [&s](char c) {
            s.insert(c);
        });

        auto c = count_if(b.begin(), b.end(), [&s](char c) {
            return s.find(c) != s.end();
        });

        cout << c << endl;
    }

    return 0;
}
