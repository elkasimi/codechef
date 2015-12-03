#include <iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int res = A - B;
    if (res % 10 != 9)	++res;
    else				--res;

    cout << res << endl;

    return 0;
}