#include<iostream>

using namespace std;

long long int sqrt_Integer(int n) {
    long long int ans = -1;
    int s = 0;
    int e = n / 2;
    long long int mid = s + (e - s) / 2;
    while(s <= e) {
        long long int square = mid * mid;
        if(square == n) {
            return mid;
        }else if(square < n) {
            ans = mid;
            s = mid + 1;
        }else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double more_precision(int n, int precision, int temp_sol) {
    double factor = 0.1;
    double ans = temp_sol;
    for(int i = 0; i < precision; i++) {
        for(double j = ans; j * j < n; j = j + factor) {
            ans = j;
        }
        factor = factor / 10;
    }
    return ans;
}

int main () {
    int n;
    cout<< "Enter number :"<< endl;
    cin >> n;

    if(n == 1) return 1;
    if(n == 0) return 0;
    int temp_sol = sqrt_Integer(n);

    cout << "Preciosion ANS : "<< more_precision(n, 4, temp_sol) <<endl;

    return 0;
}