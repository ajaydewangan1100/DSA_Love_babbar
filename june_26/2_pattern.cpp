#include <iostream>

using namespace std;

int main() {
  int n = 5;
  // cin>>n;

  int row = 1;
  while(row <= n) {
    int col = 1;
    while(col <= row) {
        char ch = 'A'+ col - 1;
      cout<< ch << " ";
      col++;
    }
    row++;
    cout<< "\n";
  }
}