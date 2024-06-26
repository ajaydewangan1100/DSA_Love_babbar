#include <iostream>

using namespace std;

// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

int main() {
  int n = 5;

  // 1st solution ----------------------------------------------------------------
  // cin>>n;

  // int row = 1;
  // int count = 1;
  // while(row <= n) {

  //   // 1st triangle + 2nd half triangle
  //   int col = 1;
  //   while(col <= n) {
  //       if (col <= n - row + 1) {
  //           cout<<col<<" ";
  //       }else if(col > n - row + 1){
  //           cout<<"*"<<" ";
  //       }
  //           col++;    
        
  //   }

  //   // 2nd 2nd half triangle + 3rd triangle
  //   int j = n;
  //   while(j) {
  //       if (j > n - row + 1) {
  //           cout<<"*"<<" ";
  //       }else if(j <= n - row + 1){
  //           cout<< j<<" ";
  //       }
  //       j--;    
        
  //   }

  //   // 3rd triangle
  //   cout<<"\n";
  //   row++;
  // }

  // 2nd solution ----------------------------------------------------------------
  int row = 1;
  while(row <= n) {

    int col = 1;
    while(col <= 2*n){
      if(row + col > 6 && col - row < 5) {
        cout<<"*"<<" ";
      }
      else if(col <= n) {
        cout<<col<<" ";
      }else if(col >= n) {
        cout<< 2*n - col + 1 <<" ";
      }

      col++;
    }
    cout<<"\n";
    row++;

  }

}
