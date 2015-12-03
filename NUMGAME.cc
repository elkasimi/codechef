#include <iostream>
#include <unordered_map>

using namespace std;


class solver {
private:
    unordered_map<int, int> _store;

public:
    bool test_win(int n) {
        if (_store.find(n) != _store.end()) return _store[n] > 0;
        int next = 0;
        for (int i = 1; i * i <= n; ++i) {
            if (n%i == 0) {
                if (i != 1 and !test_win(n - n/i)) {
                    next = n / i;
                    break;
                }

                if (n != i and !test_win(n - i)) {
                    next = i;
                    break;
                }
            }
        }
        _store[n] = next;
        return next > 0;
    }

    int next(int n) {
        return _store[n];
    }
};


int main() {
    // solver s;
    // for (int i = 20; i > 0; --i) {
    // 	s.test_win(i);
    // 	cout << "i=" << i << " " << s.next(i) << endl;
    // }

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        cout << ((n & 1) ? "BOB" : "ALICE") << endl;
    }

    return 0;
}
