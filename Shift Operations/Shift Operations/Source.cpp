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
	if (ssz == tsz && ssz == 1) {
		cout << "YES";
		return 0;
	}
	for (int i = 1; i < ssz; i++) {
		if ((int)s[i] - (int)t[i] != (int)s[i - 1] - (int)t[i - 1])
			eq = false;
	}
	if (eq)
		cout << "YES";
	else
		cout << "NO";
}
//WRONG
//NOT COMPLETED