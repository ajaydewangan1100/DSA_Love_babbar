#include <bits/stdc++.h>

using namespace std;

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	// Solution 1 --------------------------
	int ans = 1;

	while(n > 0) {
		if(n&1) {
			ans = (1LL * ans * x % m) % m;
		}
		x = (1LL * x % m * x % m) % m;
		n = n >> 1;
	}
	return ans;
	// Solution 2 --------------------------
	
}


int main() {

    int x, n, m;

    cout<<"Enter X, N, M respectively, to find modular exponentiation (X to the power N whole mod M) :"<<endl;
    cin>>x>>n>>m;

    int ans = modularExponentiation(x, n , m);
    cout<<"Modular exponentiation of X, N, M : "<<ans<<endl;
    return 0;
}