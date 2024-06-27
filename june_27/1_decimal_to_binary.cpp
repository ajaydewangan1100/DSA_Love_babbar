#include <iostream>
#include <bits\stdc++.h>
using namespace std;

int decimaltobinary(long long int n){
    cout<<"Binary for "<<n<<" is : ";
    unsigned long long int i = 0, ans = 0;
    if(n < 0) {
        n = pow(2, 16) + n;
    }

    while (n) {
        int bit = n & 1;
        ans = (bit * pow(10, i++)) + ans;
        n = (n >> 1);
    }
    cout<<ans<<endl;
    // return ans;
    return 0;
}

int main() {
    int n = -6;
    decimaltobinary(n);

}
