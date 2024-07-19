#include<bits/stdc++.h>

using namespace std;

void swapp(char arr[],int start, int end ) {
    while(start <= end) {
        swap(arr[start++], arr[end--]);
    }
}

int getLength(char arr[]) {
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        count++;
    }
    return count;
}

void printArr(char arr[], int len) {
    for(int i = 0; i < len; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    // Write C++ code here
    char words_arr[] = "ab ccd";
    
    int s = 1;
    int e = getLength(words_arr);
    int lastDone = 0;
    
    while(s <= e) {
        if(words_arr[s] == ' ' || s == e) {
            swapp(words_arr, lastDone, s - 1);
            lastDone = s + 1;
        }
        s++;
    };
    printArr(words_arr, e);

    return 0;
}