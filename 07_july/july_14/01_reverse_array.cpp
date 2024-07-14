#include<bits/stdc++.h>

using namespace std;

vector<int> reverse(vector<int> v, int position) {
    int s = position;
    int e = v.size() - 1;

    while(s <= e) {
        swap(v[s], v[e]);
        s++;
        e--;
    }

    return v;
}

void print_Array(vector<int> &v) {
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
}

int main () {
    vector<int> v;

    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(1);
    v.push_back(10);

    vector<int> ans = reverse(v, 2);

    cout<<"ANS: "<<endl<<endl;
    print_Array(ans);

    return 0;
}