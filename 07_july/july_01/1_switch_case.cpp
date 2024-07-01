#include <iostream>
#include <bits\stdc++.h>
using namespace std;

int main() {
    int n;
    cuot<<" Enter num of 4 digits :"<<endl;
    cin >> n;

    int n_100 = 0, n_50 = 0, n_20 = 0, n_1 = 0;

    // int and char we can give on case -
    switch(n > 100) {
        case (n > 100):
            n_100 = n / 100;
            n = n % 100;
            switch (n > 50)
            {
                case (true):
                    n_50 = n / 50;
                    n = n % 50;
                    switch (n > 20){
                        case (true):
                            n_20 = n / 20;
                            n = n % 20;
                            switch (n > 1){
                                case (true):
                                    n_1 = n / 1;
                                    n = n % 1;
                                    break;
                                case (false):
                                    n_1 = 0;
                                    break;
                            }
                            break;
                        case (false):
                            n_20 = 0;
                            break;
                    }
                    break;
                case (false):
                    n_20 = n / 20;
                    n = n % 20;
                    break;
            }
            break;
        case (n < 100):
            cout << "One Hundred";
            break;
        case 10:
            cout << "Ten";
            break;
        case 1:
            cout << "One";
            break;
        default:
            cout << "Invalid";
            break;
    }
    return 0;

}
