//WRONG
//NOT COMPLETED
#include <iostream>
#define ll long long
using namespace std;

int main() {
	int n;
	cin >> n;
	ll* arr = new ll[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int res = 1;
	for (int i = 1; i < n; i++)
		if (arr[i] - arr[i - 1] != 1)
			res++;
	cout << res;
}
//WRONG
//NOT COMPLETED