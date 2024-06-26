#include <iostream>

using namespace std;

int main() {
  int n = 4;
  // cin>>n;

  int row = 1;
  int count = 1;
  while(row <= n) {
    int col = 1;
    while(col <= n) {
        if(col >= row) {
            cout<<count<<" ";
            count++;
        }else{
            cout<<"  ";
        }
            col++;    
    }
    cout<<"\n";
    row++;
  }
}

// 1 2 3 4
//   5 6 7 
//     8 9
//       10