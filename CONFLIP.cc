#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int g;
        cin >> g;
        for(; g > 0; --g) {
            int I, N, Q;
            cin >> I >> N >> Q;
            // (N-K+1) % 2 == 0 if I == Q (N-K+1) % 2 == 1 else
            cout << (I == Q ? N / 2 : (N - N / 2)) << endl;
        }
    }

    return 0;
}