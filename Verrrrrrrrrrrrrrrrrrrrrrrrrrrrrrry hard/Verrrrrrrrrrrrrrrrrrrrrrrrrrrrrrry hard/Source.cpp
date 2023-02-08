//DONE
#include <iostream>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ll* arr = new ll[n];
		ll max = 0;
		int maxInd = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (arr[i] > max) {
				max = arr[i];
				maxInd = i;
			}
		}
		if (maxInd == 0 || maxInd == n - 1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}
//DONE