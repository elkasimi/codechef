#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int n;
        cin >> n;
        cout << (n % 2 == 0 ? n : (n - 1)) << endl;
    }

    return 0;
}
