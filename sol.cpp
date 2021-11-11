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
		int ans = 0;
		// if all testcases are correct, then the answer is 100
		// otherwise, if the first m testcases are correct,
		// then the answer will be k
		if (count(a.begin(), a.end(), 1) == n) {
			ans = 100;
		} else {
			int cnt = 0;
			for (int i = 0; i < m; i++) {
				cnt += (a[i] == 1);
			}
			ans = (cnt == m ? k : ans);
		}
		cout << ans << '\n';
	}
	return 0;
}
