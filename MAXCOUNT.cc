#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i) {
		unordered_map<int, int> m;
		int n;
		cin >> n;
		for (int l = 0; l < n; ++l) {
			int a;
			cin >> a;
			m[a]++;
		}
		int c = 0;
		int v = -1;
		for (auto& p : m) {
			if (c < p.second) {
				v = p.first;
				c = p.second;
			} else if (c == p.second and v > p.first) {
				v = p.first;
			}
		}
		cout << v << " " << c << endl;
	}
	
	return 0;
}
