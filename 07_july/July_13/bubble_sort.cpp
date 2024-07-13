#include <bits/stdc++.h> 
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i = 1; i < n; i++) {
        bool swapped = false;
        for(int j = 0; j < n - i; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

void printArray(vector<int>& arr, int n) {
    for(int i = 0; i < n; i++ ){
        cout<< arr[i] << " ";
    }
}

int main () {

    vector<int> arr = {6,4,2,5,7,10,1};
    bubbleSort(arr, 7);

    cout<<"Bubble SORT ANS : "<<endl;
    printArray(arr,7 );

    return 0;
}