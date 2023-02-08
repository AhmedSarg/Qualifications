//WRONG
//NOT COMPLETED
#include <iostream>
#define ll long long
using namespace std;

int main() {
	string s, t;
	cin >> s >> t;
	ll ssz = s.size();
	ll tsz = t.size();
	bool eq = true;
	if (ssz != tsz) {
		cout << "NO";
		return 0;
	}
	ll k = LLONG_MIN;
	for (int i = 0; i < ssz; i++) {
		if (k == LLONG_MIN)
			k = (int)s[0] - (int)t[0];
		else {
			if ((int)s[i] - (int)t[i] != k)
				eq = false;
		}
	}
	if (eq)
		cout << "YES";
	else
		cout << "NO";
}
//WRONG
//NOT COMPLETED