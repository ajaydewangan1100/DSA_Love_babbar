#include<bits/stdc++.h>

using namespace std;

void rotate(vector<vector<int>>& matrix) {
    // Solution 1 -------------------------
    int row = matrix.size();
    for(int i = 0; i < row; i++) {
        for(int j = 0; j <= i; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i = 0; i < row; i ++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
    
}

void printM(vector<vector<int>>& matrix, int rows) {
    for(int row = 0; row < rows; row++ ) {
        for(int col = 0; col < rows; col++ ) {
            cout<<matrix[row][col]<<" "; 
        }
        cout<<endl; 
    }
}

int main () {
    vector<vector<int>> matrix1 = {{1,2,3},{4,5,6},{7,8,9}};
    
    vector<vector<int>> matrix2 = {{1,2,3,4},{5,6,7,8},{9,10,11,12}, {13, 14, 15, 16}};

    rotate(matrix1);
    cout<<"Rotated 90 DEGREE M1 : "<<endl;
    printM(matrix1, matrix1.size());

    rotate(matrix2);
    cout<<"Rotated 90 DEGREE M2 : "<<endl;
    printM(matrix2, matrix2.size());

    

    
    return 0;
}