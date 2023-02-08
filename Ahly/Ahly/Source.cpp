//DONE
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		bool ax = false, hx = false, lx = false, yx = false;
		if (s.size() == 4)
			for (int i = 0; i < s.size(); i++)
				if (s[i] == 'a')
					ax = true;
				else if (s[i] == 'h')
					hx = true;
				else if (s[i] == 'l')
					lx = true;
				else if (s[i] == 'y')
					yx = true;
		if (ax && hx && lx && yx)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
//DONE