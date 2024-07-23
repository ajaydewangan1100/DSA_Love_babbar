#include<bits/stdc++.h>

using namespace std;

bool isPresent(int arr[][4], int row, int col, int target) {
    for(int col = 0; col < 4; col++ ) {
        for(int row = 0; row < 3; row++ ) {
            if(arr[row][col] == target) return 1;
        }
    }
    return 0;

}

// to print row wise sum - and find larget row sum
void rowWiseSum(int arr[][4], int row, int col) {
    cout<<"Printing row wise sum : "<<endl;
    int max = 0;
    int rowNUM = 0;
    for(int row = 0; row < 3; row++ ) {
        int sum = 0;
        for(int col = 0; col < 4; col++ ) {
            sum += arr[row][col]; 
            if(max < sum) {
                max = sum;
                rowNUM = row + 1;
            }; 
        }
        cout<<"ROW "<<row + 1<<" sum : "<<sum<<endl;
    }
    cout<<"MAX : ROW sum : "<<max<<" & ROW number : "<<rowNUM<<endl;
    return;

}

// to print col wise sum - and find larget col sum
void rowColSum(int arr[][4], int row, int col) {
    cout<<"Printing col wise sum : "<<endl;
    int max = 0;
    int colNUM = 0;
    for(int col = 0; col < 4; col++ ) {
        int sum = 0;
        for(int row = 0; row < 3; row++ ) {
            sum += arr[row][col];
            if(max < sum) {
                max = sum;
                colNUM = col + 1;
            }; 
        }
        cout<<"COL "<<col + 1<<" sum : "<<sum<<endl;
    }
    cout<<"MAX : COL sum : "<<max<<" & ROW number : "<<colNUM<<endl;

    return;

}

int main () {
    // create 2D array
    int arr[3][4];

    // Different method to put value - hardcoded
    // int arr2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}
    // int arr2[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}}

    // taking input - row wise
    // for(int row = 0; row < 3; row++ ) {
    //     for(int col = 0; col < 4; col++ ) {
    //         cin>>arr[row][col]; 
    //     }
    // }

    // taking input - col wise
    cout<<"Taking input in array "<<endl; 
    for(int col = 0; col < 4; col++ ) {
        for(int row = 0; row < 3; row++ ) {
            cin>>arr[row][col]; 
        }
    }

    // printing
    cout<<"Printning the array "<<endl; 
    for(int row = 0; row < 3; row++ ) {
        for(int col = 0; col < 4; col++ ) {
            cout<<arr[row][col]<<" "; 
        }
        cout<<endl; 
    }

    // Searching -
    cout<<"Enter element to search : "<<endl;
    int target;
    cin>>target;

    if(isPresent(arr, 3, 4, target)){
        cout<<"Got it"<<endl;
    }else {
        cout<<"Not Found!"<<endl;

    }

    // Printing row wise sum -----------------------
    rowWiseSum(arr, 3, 4);

    // Printing row wise sum -----------------------
    rowColSum(arr, 3, 4);

    return 0;
}