#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    map<int, int> m;

    while (n1--) {
        int n;
        cin >> n;
        m[n]++;
    }

    while (n2--) {
        int n;
        cin >> n;
        m[n]++;
    }

    while (n3--) {
        int n;
        cin >> n;
        m[n]++;
    }

    cout << count_if(m.begin(), m.end(), [](const pair<int, int>& p) {
        return p.second > 1;
    }) << endl;

for (auto& p : m) {
        if (p.second > 1)
            cout << p.first << endl;
    }

    return 0;
}
