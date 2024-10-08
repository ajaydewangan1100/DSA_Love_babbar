#include<bits/stdc++.h>

using namespace std;

bool checkEqual(int a[26], int b[26]) {
    for(int i = 0; i < 26; i++){
        if(a[i] != b[i]) return 0;
    }
    return 1;
}
bool checkInclusion(string s1, string s2) {
    int count1[26] = {0};

    for (int i = 0; i < s1.length(); i++) {
        int idx = s1[i] - 'a';
        count1[idx]++;
    }

    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};
    while(i < windowSize && i < s2.length()) {
        int idx = s2[i] - 'a';
        count2[idx]++;
        i++;
    }

    if(checkEqual(count1, count2)) return 1;

    while(i < s2.length()) {
        int idx = s2[i] - 'a';
        count2[idx]++;

        idx = s2[i - windowSize] - 'a';
        count2[idx]--;
        i++;

        if(checkEqual(count1, count2)) return 1;

    }
    return 0;
}

int main () {
    
    string s1 = "abc";  
    string s2 = "alkhjkjgkbaasd";  
    cout<<"Avaialable : "<<checkInclusion(s1,s2)<<endl;
    return 0;
}