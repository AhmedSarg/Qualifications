#include <iostream>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	ll val = 1;
	while (t--) {
		ll n;
		cin >> n;
		while (n--) {
			char ch;
			cin >> ch;
			if (ch == '+') {
				int x;
				cin >> x;
				val += x;
			}
			else if (ch == '-') {
				int x;
				cin >> x;
				val -= x;
			}
			else if (ch == '*') {
				int x;
				cin >> x;
				val *= x;
			}
			else if (ch == '/') {
				int x;
				cin >> x;
				val /= x;
			}
			else if (ch == 'N')
				val = -val;
		}
		cout << val << endl;
	}
}