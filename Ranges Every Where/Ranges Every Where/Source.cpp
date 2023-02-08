//WRONG
//NOT COMPLETED
#include <iostream>
#define ll long long
using namespace std;

int main() {
	ll n;
	cin >> n;
	ll* arr = new ll[n];
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
	ll res = 1;
	for (ll i = 1; i < n; i++)
		if (arr[i] - arr[i - 1] > 1)
			res++;
	cout << res;
}
//WRONG
//NOT COMPLETED