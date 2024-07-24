#include<bits/stdc++.h>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> spiral;

    int rows = matrix.size();
    int cols = matrix[0].size();

    int count = 0;
    int total = rows * cols;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = rows - 1; // 2
    int endingCol = cols - 1; // 2

    while(count < total) {
        for(int col = startingCol; count < total && col <= endingCol; col++) {
            spiral.push_back(matrix[startingRow][col]);
            cout<<matrix[startingRow][col]<<" ";
            count++;
        }
        startingRow++;

        for(int row = startingRow; count < total && row <= endingRow; row++) {
            spiral.push_back(matrix[row][endingCol]);
            cout<<matrix[row][endingCol]<<" ";
            count++;
        }
        endingCol--;

        for(int col = endingCol; count < total && col >= startingCol; col--) {
            spiral.push_back(matrix[endingRow][col]);
            cout<<matrix[endingRow][col]<<" ";
            count++;
        }
        endingRow--;

        for(int row = endingRow; count < total && row >= startingRow; row--) {
            spiral.push_back(matrix[row][startingCol]);
            cout<<matrix[row][startingCol]<<" ";
            count++;
        }
        startingCol++;
    }
    cout<<endl;


    return spiral;
}

int main () {
    vector<vector<int>> matrix1 = {{1,2,3},{4,5,6},{7,8,9}};

    cout<<"Spiral Print matrix1 : "<<endl;
    vector<int> spiral1 = spiralOrder(matrix1);

    
    vector<vector<int>> matrix2 = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    cout<<"Spiral Print matrix2 : "<<endl;
    vector<int> spiral2 = spiralOrder(matrix2);

    
    return 0;
}