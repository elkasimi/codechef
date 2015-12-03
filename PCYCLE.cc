#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> permutation_cycles(const vector<int>& permutation) {
    vector<bool> used(permutation.size(), false);

    vector<vector<int>> cycles;

    for (int i = 1; i < permutation.size(); ++i) {
        // cerr << "i=" << i << endl;
        if (used[i])
            continue;

        vector<int> cycle;
        cycle.push_back(i);
        used[i] = true;

        for (int l = permutation[i]; l != i; l = permutation[l]) {
            // cerr << "p=" << permutation[l] << ", " << l << endl;
            used[l] = true;
            cycle.push_back(l);
        }

        cycle.push_back(i);
        // cerr << cycle[0] << "->" << cycle[1] << endl;

        cycles.push_back(cycle);
    }

    return cycles;
}

int main() {
    int n;
    cin >> n;
    vector<int> permutation(n+1, 0);
    for (int i = 1; i <= n; ++i) {
        cin >> permutation[i];
    }
    auto cycles = permutation_cycles(permutation);
    cout << cycles.size() << endl;
for (auto& cycle : cycles) {
        bool first = true;
        for_each(cycle.begin(), cycle.end(), [&first] (int a) {
            if (first) first = false;
            else cout << " ";
            cout << a;
        });
        cout << endl;
    }
    return 0;
}