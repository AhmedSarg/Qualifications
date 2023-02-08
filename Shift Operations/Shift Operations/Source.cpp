//DONE
#include <iostream>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	string s, t;
	cin >> s >> t;
	ll ssz = s.size();
	ll tsz = t.size();
	int k = (int)t[0] - (int)s[0];
	for (int i = 0; i < ssz; i++) {
		s[i] += k;
		if (s[i] < 97)
			s[i] += 26;
		if (s[i] > 122)
			s[i] -= 26;
	}
	if (s == t)
		cout << "YES";
	else
		cout << "NO";
}
//DONE