#include <bits/stdc++.h>

using namespace std;

int main (){
    // Questions from - coding ninjas
    // URL - https://www.naukri.com/code360/guided-paths/pointers/content/235644/offering/3168909

    // Question 1 ------------
    cout<<endl<<"Q1 "<<endl;
    float f = 10.5;
    float p = 2.5;
    float *ptr = &f;
    // cout<<sizeof(f)<<endl;

    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p<<endl;

    // Question 2 ------------
    cout<<"Q2 "<<endl;
    int a = 7;
    int b = 17;
    int *c = &b;
    *c = 7;
    cout  << a << " "<< b << endl;

    // Question 3 ------------
    cout<<"Q3 \n --- segmentation error (and not run)"<<endl;
    // int *ptr3 = 0;
    // int a3 = 10;
    // *ptr3 = a3;
    // cout << *ptr3 << endl;

    // Question 4 ------------
    cout<<"Q4 "<<endl;
    char ch = 'a';
    char* ptr4 = &ch;
    ch++;
    cout << *ptr4 << endl;

    // Question 5 ------------
    cout<<"Q5 "<<endl;
    int a5 = 7;
    int *c5 = &a;
    c5 = c5 + 1;
    cout  << a5 << " " << *c5 << endl;

    // Question 6 ------------
    cout<<"Q6 "<<endl;
    int a6[5];
    int *c6;
    cout << sizeof(a6) << " " << sizeof(c6) <<endl;;

    // Question 7 ------------
    cout<<"Q7 "<<endl;
    int a7[] = {9, 8, 3, 4};
    cout<< &a7 <<endl;
    cout << *(a7) << " " << *(a7+1) <<endl;

    // Question 8 ------------
    cout<<"Q8 "<<endl;
    int a8[3] = {10, 12, 23};
    cout << *(a8 + 2) <<endl;;

    // Question 9 ------------
    cout<<"Q9 \n --- segmentation error (and not run)"<<endl;
    int a9[] = {1, 2, 3, 4};
    int *p9 = (a9+1);     // a9+1
    cout << *p9 << endl;

    // Question 10 ------------
    cout<<"Q10 "<<endl;
    int arr10[] = {4, 5, 6, 7};
    int *p10 = (arr10 + 1);
    cout <<*p10<<" - "<< *arr10 + 9 <<endl;
    cout <<"arr10      : "<< arr10 <<endl;
    cout <<"arr10 + 1  : "<< arr10 + 1 <<endl;
    cout <<"*arr10     : "<< *arr10 <<endl;
    cout <<"*arr10 + 1 : "<< *arr10 + 1 <<endl;

    // Question 11 ------------
    cout<<"Q11 - "<<endl;
    char b11[] = "xyz";
    char *c11 = &b11[0];   // &b11[0] == b11 - both will store address of b11
    cout << c11 << endl;

    // Question 12 ------------
    cout<<"Q12 - "<<endl;
    char s12[]= "hello";
    char *p12 = s12;
    cout << s12[0] << " " << p12[0] <<endl;

    // Question 13 ------------
    cout<<"Q13 - "<<endl;
    int a13 = 10;
    int *p13 = &a13;
    int **q13 = &p13;
    cout << *p13 << " "<< p13 << endl;
    cout << **q13 << " " << *q13 << endl;
    int b13 = 20;
    *q13 = &b13;
    (*p13)++;
    cout << a13 << " " << b13 << endl;
    
    // Question 14 ------------
    cout<<"Q14 - "<<endl;



















}