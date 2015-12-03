#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int n;
        cin >> n;
        int res = n;
        while (res >= 0 and res % 7 != 0) {
            res -= 4;
        }

        if (res >=0) 	cout << res;
        else 			cout << -1;
        cout << endl;
    }

    return 0;
}