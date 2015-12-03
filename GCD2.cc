#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// 10^p%b
int modulo(int p, int b) {
    if (p == 0) {
        return 1;
    } else {
        int t = modulo(p/2, b);
        int res = (t*t) % b;
        if (p&1) {
            res *= 10;
            res %= b;
        }
        return res;
    }
}

int gcd(int a, int b) {
    if (a%b == 0)
        return b;
    else
        return gcd(b%a, a);
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int a;
        string s;
        cin >> a >> s;
        if (a == 0) {
            cout << s << endl;
        } else {
            reverse(s.begin(), s.end());
            int b = 0;
            for (int l = 0; l < s.size(); ++l) {
                b += modulo(l, a) * (s[l] - '0');
                b %= a;
            }

            if (b == 0)
                cout << a << endl;
            else
                cout << gcd(a, b) << endl;
        }
    }

    return 0;
}
