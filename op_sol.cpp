#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n;
	cin >> n;
	//create an array with elements such as string->int map pair
	map<string, int> mp[2];
	//create a set to get the distinct strings
	set<string> s;
	for(int i=0; i<n; ++i) {
		string tmp;
		int a;
		cin >> tmp >> a;
		//use 'a' as the index or identifier for every string->int map pair
		mp[a][tmp]++;
		s.insert(tmp);
	}
	int cnt=0;
	//choose word->bool pair that has the max value and add it to the counter
	for(auto x : s)
		cnt+=max(mp[0][x], mp[1][x]);
	cout << cnt << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
