#include <bits/stdc++.h> 
using namespace std;

void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

void printArray(vector<int>& arr, int n) {
    for(int i = 0; i < n; i++ ){
        cout<< arr[i] << " ";
    }
}

int main () {

    vector<int> arr = {6,4,2,5,7,10,1};
    selectionSort(arr, 7);

    cout<<"Selection SORT ANS : "<<endl;
    printArray(arr,7 );

    return 0;
}