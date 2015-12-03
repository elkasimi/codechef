#include <iostream>
#include <vector>
#include <bitset>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

class Solver {
private:
    map<int, string> _alreadyComputed;

public:
    string solve(int n) {
        if (_alreadyComputed.find(n) != _alreadyComputed.end()) {
            return _alreadyComputed[n];
        }

        bool first = true;
        bitset<15> bs(n);
        string res;
        int i;
        for (i = 14; !bs[i]; --i);
        for (; i >= 0; --i) {
            //cerr << "n=" << n << ", i=" << i << endl;
            if (!bs[i]) continue;
            if (first) first = false;
            else res += "+";
            if (i == 0) res += "2(0)";
            else if (i == 1) res += "2";
            else res += "2(" + solve(i) + ")";
        }
        _alreadyComputed[n] = res;
        return res;
    }

};

int main() {
    vector<int> v = {137, 1315, 73, 136, 255, 1384, 16385};

    Solver solver;

    for_each(v.begin(), v.end(), [&](int n) {
        cout << n << "=" << solver.solve(n) << endl;
    });

    return 0;
}
