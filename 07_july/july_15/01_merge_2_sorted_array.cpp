#include<bits/stdc++.h>

using namespace std;

void merge(vector<int> &arr1, int n, vector<int> &arr2, int m, vector<int> &arr3) {
    int i = 0, j = 0;
    int k = 0;
    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        }else {
            arr3[k++] = arr2[j++];
        }
    }

    while(i < n) {
        arr3[k++] = arr1[i++];
    }

    while(j < m) {
        arr3[k++] = arr2[j++];
    }

    for(int i = 0; i < arr3.size(); i++) {
        cout<<arr3[i]<<" ";
    }
}

void print_Array(vector<int> &v) {
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
}

int main () {
    
    vector<int> arr1 = {2,3,3,6};
    vector<int> arr2 = {1,3,4,5,6};

    vector<int> arr3(arr1.size() + arr2.size());

    merge(arr1, arr1.size(), arr2, arr2.size(), arr3);
    

    cout<<"Sorted ANS: "<<endl;
    print_Array(arr3);

    return 0;
}