#include<bits/stdc++.h>
using namespace std;

char findCharOfMaxCount(string ch) {
    int countArr[26] = {0}; 
    for(int i = 0; i < ch.length(); i++) {
        int temp = ch[i] - 'a';
        countArr[temp]++;
    }
    int less = INT_MIN;
    int charIdx = INT_MIN;
    for(int j = 0; j < 26; j++) {
        if(countArr[j] > less) {
            less = countArr[j];
            charIdx = j;
        }
    }
    return 'a' + charIdx;
}

int main () {
    
    string str = "we are human beinggggg";

    cout<<findCharOfMaxCount(str)<<endl;

    return 0;
}