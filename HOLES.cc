#include <iostream>
#include <string>
#include <numeric>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        string s;
        cin >> s;
        int c = accumulate(s.begin(), s.end(), 0, [](int a, char c) {
            switch(c) {
            case 'A':
            case 'D':
            case 'O':
            case 'P':
            case 'R':
            case 'Q':
                return a + 1;
            case 'B':
                return a + 2;
            default:
                return a;
            }
        });

        cout << c << endl;
    }

    return 0;
}