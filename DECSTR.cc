#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const string reverse_alphabet = "zyxwvutsrqponmlkjihgfedcba";

int main() {
    int t;
    cin >> t;
    for(int i = 1; i <= t; ++i) {
        int k;
        cin >> k;
        int r = k % 25;
        int c = k / 25;
        if (r) cout << reverse_alphabet.substr(25 - r);
        while(c--) cout << reverse_alphabet;
        cout << endl;
    }

    return 0;
}
