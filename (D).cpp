#include<bits/stdc++.h>

using namespace std;
using INT = long long;

const int NN = 5050, mod = 998244353;

int a[NN], dp[NN] = {1};

int main() {
	
	int n; scanf("%d", &n);
	for(int i = 1; i <= n; i++) scanf("%d", a + i);
	sort(a + 1, a + n + 1);
	
	int ans = 0;
	for(int i = 1, x; i <= n; i++) {
		x = a[i];
		for(int j = 0; j <= x; j++) {
			ans = (ans + (INT)x * dp[j]) % mod;
		}
		for(int j = x + 1; j < NN; j++) {
			ans = (ans + (INT)(j + x + 1 >> 1) * dp[j]) % mod;
		}
		for(int j = NN; j--; ) if(j >= x) {
			dp[j] = (dp[j] + dp[j - x]) % mod;
		}
	}
	printf("%d\n", ans);
	return 0;
}