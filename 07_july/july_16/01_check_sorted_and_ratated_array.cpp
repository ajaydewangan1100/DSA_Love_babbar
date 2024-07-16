#include<bits/stdc++.h>

using namespace std;

bool checkRotAndSorted(vector<int>& arr) {
    int count = 0;
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i - 1] > arr[i]) {
            count++;
        }
    }
    if(arr[arr.size() - 1] > arr[0]) {
        count++;
    }
    return count <= 1;
}


void print_Array(vector<int> &v) {
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
}

int main () {
    
    vector<int> arr = {1, 2, 1,1,3,4,5,6};


    string ans = checkRotAndSorted(arr) ? "TRUE" : "FALSE" ;
    

    cout<<"Sorted ANS: "<< ans <<endl;
    print_Array(arr);

    return 0;
}