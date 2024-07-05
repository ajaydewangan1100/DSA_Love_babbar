#include <bits/stdc++.h> 
using namespace std;

// Search first occurance of any int - using binary search -
int firstOcc (vector<int> &arr, int n, int k) {
    int ans = -1;
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while(s <= e) {
        if(arr[mid] == k) {
            ans = mid;
            e = mid - 1;
        }else if(arr[mid] > k) {
            e = mid - 1;
        }else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

// Search last occurance of any int - using binary search -
int lastOcc (vector<int> &arr, int n, int k) {
    int ans = -1;
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while(s <= e) {
        if(arr[mid] == k) {
            ans = mid;
            s = mid + 1;
        }else if(arr[mid] > k) {
            e = mid - 1;
        }else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

// Count All occurance of any int - using binary search -
int countNumberOfElements (vector<int> &arr, int n, int k) {
    int firstIndex = firstOcc(arr, n, k);
    int lastIndex = lastOcc(arr, n, k);

    return lastIndex - firstIndex + 1;
}

int main() {

    vector<int> even = {1,2,4,4,4,5};
    cout<<"Occurance of 5 : first :"<< firstOcc(even, 6, 5) <<" and last :"<< lastOcc(even, 6, 5) <<endl;
    
    int k = 4;
    int count = countNumberOfElements(even, 6, 4);
    cout<<"Count of "<< k << " : "<< count<< endl;
}