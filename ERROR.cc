#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 1; i <= t; ++i) {
        string s;
        cin >> s;
        if (s.find("010") != string::npos or s.find("101") != string::npos)
            cout << "Good" << endl;
        else
            cout << "Bad" << endl;
    }

    return 0;
}