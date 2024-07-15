#include<bits/stdc++.h>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    if(m < 1) nums1 = nums2;
    if(n < 1) return;
    int i = m + n - 1;
    m--;
    n--;
    while(i >= 0) {
        if(nums1[m] > nums2[n]){
            nums1[i--] = nums1[m--];
        }else{
            nums1[i--] = nums2[n--];
        };
    }
}


void print_Array(vector<int> &v) {
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
}

int main () {
    
    vector<int> arr1 = {2,3,3,6, 0, 0, 0, 0, 0};
    vector<int> arr2 = {1,3,4,5,6};


    merge(arr1, 4, arr2, arr2.size());
    

    cout<<"Sorted ANS: "<<endl;
    print_Array(arr1);

    return 0;
}