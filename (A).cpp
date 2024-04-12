#include<bits/stdc++.h>

using namespace std;
 
int main() {
    int t; scanf("%d", &t);
    
    while(t--) {
    	int n, m, k; scanf("%d %d %d", &n, &m, &k);
    	
    	if(m == 1 || n - (n + m - 1) / m <= k) puts("NO");
    	else puts("YES");
    }
    return 0;
}