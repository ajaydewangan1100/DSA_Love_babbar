#include <bits/stdc++.h> 

using namespace std;

void insertionSort(vector<int> &arr, int n){
    // Write your code here.
    // By using for loop -------------------------------
    // for(int i = 1; i < n; i++) {
    //     int temp = arr[i];
    //     int j = i - 1;
    //     for(; j >= 0; j--){
    //         if(arr[j] > temp) {
    //             arr[j + 1] = arr[j];
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     arr[j + 1] = temp;
    // }
    // By using while loop -------------------------------
    for(int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0){
            if(arr[j] > temp) {
                arr[j + 1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
    }

}

void printArray(vector<int>& arr, int n) {
    for(int i = 0; i < n; i++ ){
        cout<< arr[i] << " ";
    }
}

int main () {

    vector<int> arr = {6,4,2,5,7,10,1};
    insertionSort(arr, 7);

    cout<<"Insertion SORT ANS : "<<endl;
    printArray(arr, 7);

    return 0;
}