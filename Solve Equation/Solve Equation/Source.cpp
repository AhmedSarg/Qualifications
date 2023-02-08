#include <iostream>
#define ll long long
using namespace std;

int main() {
	ll b, c, d;
	cin >> b >> c >> d;
	for (ll i = 0; i <= LLONG_MAX; i++)
		if ((i + b) & c == d) {
			cout << i;
			break;
		}
}