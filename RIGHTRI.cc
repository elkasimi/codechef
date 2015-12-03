#include <iostream>
#include <algorithm>
#include <limits>

using namespace std;

class triangle {
    friend istream& operator >> (istream& in, triangle& t);
private:
    int _x1, _y1, _x2, _y2, _x3, _y3;

public:
    triangle() {}

    bool is_right() const {
        double a = pow(_x1-_x2, 2.0) + pow(_y1-_y2, 2.0);
        double b = pow(_x3-_x2, 2.0) + pow(_y3-_y2, 2.0);
        double c = pow(_x1-_x3, 2.0) + pow(_y1-_y3, 2.0);
        double h = max(a, max(b, c));
        double i = min(a, min(b, c));
        double j = a + b + c - h - i;
        return fabs(h - i - j) < numeric_limits<double>::epsilon();
    }
};

istream& operator >> (istream& in, triangle& t) {
    in >> t._x1 >> t._y1 >> t._x2 >> t._y2 >> t._x3 >> t._y3;
    return in;
}

int main() {
    int n;
    cin >> n;
    int res = 0;
    for(int i = 1; i <= n; ++i) {
        triangle t;
        cin >> t;
        res += t.is_right();
    }

    cout << res << endl;

    return 0;
}
