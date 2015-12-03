#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int n;
        cin >> n;
        if (n % 4 != 1)	cout << "BOB" << endl;
        else 			cout << "ALICE" << endl;
    }

    return 0;
}
