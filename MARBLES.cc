#include <iostream>
#include <algorithm>
#include <list>
#include <numeric>

using namespace std;

typedef unsigned long long uint64;

int GCD(int a, int b) {
    //cerr << a << "," << b << endl;
    if (a%b == 0) return b;
    else return GCD(b,a%b);
}

void divideByGCD(int& a, int& b) {
    auto d = GCD(a, b);
    a /= d;
    b /= d;
}

uint64 f(int n, int k) {
    k = min(k, n-k);

    list<int> numerators, denominators;

    for (int j = 0; j < k; ++j) {
        numerators.push_back(n - j);
        denominators.push_back(j+1);
    }


    for (auto& a : numerators) {
        for (auto& b : denominators) {
            divideByGCD(a, b);
        }
    }


    return accumulate(numerators.begin(), numerators.end(), (uint64)1, [](uint64 a, int b) {
        return a * b;
    });
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int n, k;
        cin >> n >> k;
        cout << f(n-1, k-1) << endl;
    }

    return 0;
}
