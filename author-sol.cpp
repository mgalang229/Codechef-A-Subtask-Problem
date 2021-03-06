#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m, k;
		cin >> n >> m >> k;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// if all testcases are correct, then the answer is 100
		// otherwise, if the first m testcases are correct,
		// then the answer will be k
		int sum = 0;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			sum += a[i];
			if (i + 1 == m && sum == m) {
				ans = k;
			}
		}
		cout << (sum < n ? ans : 100) << '\n';
	}
	return 0;
}
