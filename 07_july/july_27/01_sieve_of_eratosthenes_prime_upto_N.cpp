#include<bits/stdc++.h>

using namespace std;

int countPrimes(int n) {
    if(n <= 1) return 0;

    int count = 0;
    vector <bool> prime(n + 1, true);

    prime[0] = prime[1] = false;

    for(int i = 2; i < n; i++) {
        if(prime[i]){
            count++;

            for(int j = i*2; j < n; j = j + i) {
                prime[j] = 0;
            }
        }

    }
    return count;
}

int main () {
    int n = 1;

    cout<<"PRIMES upto "<<n<<" : "<<countPrimes(n)<<endl;

    n = 55;
    cout<<"PRIMES upto "<<n<<" : "<<countPrimes(n)<<endl;

    n = 102;
    cout<<"PRIMES upto "<<n<<" : "<<countPrimes(n)<<endl;

return 0;
}