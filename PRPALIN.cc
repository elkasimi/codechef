#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>

using namespace std;

bool is_prime(int n) {
	if (n == 1) return false;
	if (n == 2) return true;
	if (!(n&1)) return false;
	for (int i = 3; i * i <= n; i += 2)
		if (n%i == 0)
			return false;
	return true;
}

bool is_palindrome(int n) {
	char s[20];
	sprintf(s, "%d", n);
	int len = strlen(s);
	for (int i = 0; i < len; ++i)
		if (s[i] != s[len - i - 1])
			return false;
	return true;
}

void generate_all_solutions() {
	cout << "const vector<int> prpalin = {";
	for (int n = 2; ; ++n) {
		if (is_palindrome(n) and is_prime(n)) {
			cout << n << ", ";
			
			if (n > 1000000) break;
		}
	}
	cout << "};" << endl;
}

int main() {
	const vector<int> prpalin = {2, 3, 5, 7, 11, 101, 131, 151, 181, 191, 313, 353, 373, 383, 727, 757, 787, 797, 919, 929, 10301, 10501, 10601, 11311, 11411, 12421, 12721, 12821, 13331, 13831, 13931, 14341, 14741, 15451, 15551, 16061, 16361, 16561, 16661, 17471, 17971, 18181, 18481, 19391, 19891, 19991, 30103, 30203, 30403, 30703, 30803, 31013, 31513, 32323, 32423, 33533, 34543, 34843, 35053, 35153, 35353, 35753, 36263, 36563, 37273, 37573, 38083, 38183, 38783, 39293, 70207, 70507, 70607, 71317, 71917, 72227, 72727, 73037, 73237, 73637, 74047, 74747, 75557, 76367, 76667, 77377, 77477, 77977, 78487, 78787, 78887, 79397, 79697, 79997, 90709, 91019, 93139, 93239, 93739, 94049, 94349, 94649, 94849, 94949, 95959, 96269, 96469, 96769, 97379, 97579, 97879, 98389, 98689, 1003001};
		
    int n;
    cin >> n;
	
	cout << *lower_bound(prpalin.begin(), prpalin.end(), n) << endl;
	
    return 0;
}
