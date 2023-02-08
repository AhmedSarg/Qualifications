//WRONG
//NOT COMPLETED
#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#define ll long long

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		ll sum = 0;
		for (ll i = 1; i <= n; i++) {
			if (fmod(log2(i), 1.0) == 0)
				sum -= i;
			else
				sum += i;
		}
		cout << sum << endl;
	}
}
//WRONG
//NOT COMPLETED