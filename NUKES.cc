#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    int a, n, k;
    cin >> a >> n >> k;

    list<int> chambers(k, 0);

    for_each(chambers.begin(), chambers.end(), [&](int& x) {
        x = a % (n+1);
        a /= n+1;
    });

    bool first = true;
    for_each(chambers.begin(), chambers.end(), [&](int& x) {
        if (first)
            first = false;
        else
            cout << " ";
        cout << x;
    });

    cout << endl;

    return 0;
}
