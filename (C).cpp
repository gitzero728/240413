#include<bits/stdc++.h>

using namespace std;

const int NN = 202;

int x[NN], nx[NN];
int y[NN], ny[NN];
string s;

int main() {
	
	int t; scanf("%d", &t);
	while(t--) {
		for(int i = NN; i--; ) {
			x[i] = nx[i] = 0;
			y[i] = ny[i] = 0;
		}
		
		cin>>s; for(int i = s.size(), nn = NN; i--; ) x[--nn] = s[i] - '0';
		cin>>s; for(int i = s.size(), nn = NN; i--; ) y[--nn] = s[i] - '0';
		
		bool flag = true;
		for(int i = 0; i < NN; i++) {
			if(x[i] == y[i]) {
				nx[i] = x[i];
				ny[i] = y[i];
			}
			else if(flag) {
				nx[i] = max(x[i], y[i]);
				ny[i]= min(x[i], y[i]);
				flag = 0;
			}
			else {
				nx[i] = min(x[i], y[i]);
				ny[i] = max(x[i], y[i]);
			}
		}
		
		for(int i = 0; i < NN; i++) if(nx[i]) {
			for(int j = i; j < NN; j++) printf("%d", nx[j]);
			puts(""); break;
		}
		for(int i = 0; i < NN; i++) if(ny[i]) {
			for(int j = i; j < NN; j++) printf("%d", ny[j]);
			puts(""); break;
		}
	}
	return 0;
}