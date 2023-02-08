//DONE
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int n = s.size();
		for (int i = 0; i < n; i++)
			if (s[i] == '?')
				s[i] = 'a';
		cout << s << endl;
	}
}
//DONE