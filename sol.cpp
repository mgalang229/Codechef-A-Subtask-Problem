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
		int ans = 0;
		if (count(a.begin(), a.end(), 1) == n) {
			ans = 100;
		} else {
			int correct = count(a.begin(), a.begin() + m, 1);
			ans = (correct == m ? k : ans);
		}
		cout << ans << '\n';
	}
	return 0;
}
