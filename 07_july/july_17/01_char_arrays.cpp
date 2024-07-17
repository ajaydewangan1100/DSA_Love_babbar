#include<bits/stdc++.h>

using namespace std;

bool isSkip(char ch) {
    if(ch >= 'a' && ch <= 'z') {
        return 0;
    }else if(ch >= 'A' && ch <= 'Z') {
        return 0;
    }else if(ch >= '0' && ch <= '9') {
        return 0;
    }
    return 1;
}

char toLowerCase(char ch) {
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }else {
        return ch - 'A' + 'a';
    }
}

bool checkPalindrome(char str[], int n) {
    int s = 0;
    int e = n - 1;
    while(s <= e) {
        cout<<str[s]<<" : s";
        if(isSkip(str[s])) s++;
        cout<<str[e]<<" : e";
        if(isSkip(str[e])) e--;

        if(toLowerCase(str[s]) != toLowerCase(str[e])) return 0; 
        s++;
        e--;
    }
    return 1;
}

void reverseName(char name[], int n) {
    int s = 0;
    int e = n - 1;
    while(s <= e) {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main () {
    
    char name[20];

    cout<<"Enter your name : "<<endl;
    cin>>name;
    cout<<"Your name is "<<name<<endl;;

    int length = getLength(name);
    cout<<"Your name length is : "<<length<<endl;

    reverseName(name, length);
    cout<<"Reversed name is : "<<name<<endl;

    string t = checkPalindrome(name, length)? "TRUE" : "FALSE";
    cout<<"Check Palindrome : "<<t<<endl;

    return 0;
}