#include<bits/stdc++.h>

using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols){
    //Write your code here
    vector<int> wave;
    for(int col = 0; col < mCols; col++) {
        if(col & 1) {
            for(int row = nRows - 1; row >= 0; row--) {
                wave.push_back(arr[row][col]);
                cout<<arr[row][col]<<" ";
            }
        }else {
            for(int row = 0; row < nRows; row++) {
                wave.push_back(arr[row][col]);
                cout<<arr[row][col]<<" ";
            }
        }
    }
    cout<<endl;
    return wave;
}

int main () {
    vector<vector<int>> matrix1 = {{1,2,3},{4,5,6},{7,8,9}};

    cout<<"SINE wave Print matrix1 : "<<endl;
    vector<int> spiral1 = wavePrint(matrix1, 3,3);

    
    vector<vector<int>> matrix2 = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    cout<<"SINE wave Print matrix2 : "<<endl;
    vector<int> spiral2 = wavePrint(matrix2, 3, 4);

    
    return 0;
}