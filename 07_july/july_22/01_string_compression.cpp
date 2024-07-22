#include<bits/stdc++.h>

using namespace std;

int compress(vector<char>& chars) {
    // Solution 1 -----------------------------
    int i = 0;
    int n = chars.size();
    int ansIndex = 0;
    while(i < n) {
        int j = i + 1;
        while(j < n && chars[i] == chars[j]) {
            j++;
        }

        chars[ansIndex++] = chars[i];

        if(j - i > 1) {
            string count = to_string(j - i);
            for(char ch: count) {
                chars[ansIndex++] = ch;
            }
        }

        i = j;
    }
    return ansIndex;
}

int main () {
    
    vector<char> charArray1 = {'a','a','b','b','c','c','c','c','c','c','c','c','c','c','c','c','z'};
    cout<<"ANS Array Length : charArray1 : "<<compress(charArray1)<<endl;
    vector<char> charArray2 = {'a'};
    cout<<"ANS Array Length : charArray1 : "<<compress(charArray2)<<endl;
    vector<char> charArray3 = {'a','b'};
    cout<<"ANS Array Length : charArray1 : "<<compress(charArray3)<<endl;
    return 0;
}