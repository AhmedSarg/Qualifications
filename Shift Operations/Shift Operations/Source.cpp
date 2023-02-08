//WRONG
//NOT COMPLETED
#include <iostream>
#define ll long long
using namespace std;

char addOne(char ch, int n) {
	switch (ch) {
	case 'a':
		ch = 'b';
		break;
	case 'b':
		ch = 'c';
		break;
	case 'c':
		ch = 'd';
		break;
	case 'd':
		ch = 'e';
		break;
	case 'e':
		ch = 'f';
		break;
	case 'f':
		ch = 'g';
		break;
	case 'g':
		ch = 'h';
		break;
	case 'h':
		ch = 'i';
		break;
	case 'i':
		ch = 'j';
		break;
	case 'j':
		ch = 'k';
		break;
	case 'k':
		ch = 'l';
		break;
	case 'l':
		ch = 'm';
		break;
	case 'm':
		ch = 'n';
		break;
	case 'n':
		ch = 'o';
		break;
	case 'o':
		ch = 'p';
		break;
	case 'p':
		ch = 'q';
		break;
	case 'q':
		ch = 'r';
		break;
	case 'r':
		ch = 's';
		break;
	case 's':
		ch = 't';
		break;
	case 't':
		ch = 'u';
		break;
	case 'u':
		ch = 'v';
		break;
	case 'v':
		ch = 'w';
		break;
	case 'w':
		ch = 'x';
		break;
	case 'x':
		ch = 'y';
		break;
	case 'y':
		ch = 'z';
		break;
	case 'z':
		ch = 'a';
		break;
	}
	if(n)
		ch = addOne(ch, --n);
	return ch;
}

int main() {
	ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	string s, t;
	cin >> s >> t;
	ll ssz = s.size();
	ll tsz = t.size();
	if (ssz == tsz && ssz == 1) {
		cout << "YES";
		return 0;
	}
	int k = (int)t[0] - (int)s[0];
	s[0] = addOne(s[0], k - 1);
	for (int i = 1; i < ssz; i++) {
		s[i] = addOne(s[i], k - 1);
	}
	if (s == t)
		cout << "YES";
	else
		cout << "NO";
}
//WRONG
//NOT COMPLETED