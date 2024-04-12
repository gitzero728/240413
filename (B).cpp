#include<bits/stdc++.h>

using namespace std;

int main() {
	
	int t; scanf("%d", &t);
	vector<int> vec;
	map<int, int> mp;
	
	while(t--) {
		int n; scanf("%d", &n);
		vec.clear(), mp.clear();
		
		for(int i = n; i--; ) {
			int x; scanf("%d", &x);
			vec.push_back(x);
			mp[x]++;
		}
		
		if(mp.size() == 1) puts("-1");
		else {
			int x = vec[0], ix = 0, ans = n;
			for(int i = 0; i < n; i++) {
				if(vec[0] == vec[i]) ix++;
				else {
					ans = min(ans, ix);
					ix = 0;
				}
			}
			printf("%d\n", min(ans, ix));
		}
	}
	return 0;
}