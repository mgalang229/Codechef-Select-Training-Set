#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		//create an array with elements such as string -> int map pair
		map<string, int> mp[2];
		//create a set to get the distinct strings
		set<string> s;
		for (int i = 0; i < n; i++) {
			string tmp;
			cin >> tmp;
			int a;
			cin >> a;
			//use 'a' as the index or identifier for every string -> int map pair
			mp[a][tmp]++;
			s.insert(tmp);
		}
		int cnt = 0;
		//choose word -> bool pair that has the max value and add it to the counter
		for (auto x : s) {
			cnt += max(mp[0][x], mp[1][x]);
		}
		cout << cnt << '\n';
	}
	return 0;
}
