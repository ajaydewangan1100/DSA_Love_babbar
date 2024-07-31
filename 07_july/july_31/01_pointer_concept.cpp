#include <bits/stdc++.h>

using namespace std;

int main (){
    int num = 5;
    int *p = &num;
    cout<<"Print int using *p : "<< *p<<" and address of num using p : "<< p <<endl;
    // int *p = &num -- p is a Pointer of int 
    // p :  can stores address using *

    char ch = 'a';
    char *pch = &ch;
    cout<<"Print char using *pch : "<< *pch <<" and address of num using pch : "<< pch <<endl;
    // int *p = &num -- p is a Pointer of char 

    // practice - finding size of pointer
    cout<<"Size of num : "<<sizeof(num)<<endl;
    cout<<"Size of pointer p : "<<sizeof(p)<<endl;
    cout<<"Size of pointer pch : "<<sizeof(pch)<<endl;
    // All type of pointer takes 8 bit storage because every memory address is 8 bit

    // Bad practice - without giving value just initialising
    int *p2; 
    // below is better than above - but gives segmentation error, because 0 is not an address or variable
    int *p3 = 0;
    
    // Update value of varible using pointer
    int num2 = 12;
    int *p22 = &num2;
    cout<<"Before update num2 : "<<num2<<endl;
    (*p22)++;
    cout<<"After update num2 : "<<num2<<endl;

    // Copy pointerto another pointer
    int *q = p22;
    cout<<"Value of *p22 and *q : "<<*p22<<" - "<<*q<<endl;
    cout<<"Address of *p22 and *q : "<<p22<<" : "<<q<<endl;

    // Important concept
    int i = 33;
    int *p_i = &i;
    cout<<" +++++++ Print (*p_i)++ : "<<(*p_i)++<<endl;

    *p_i = *p_i + 1;
    cout<<"Printing *p_i : "<<*p_i <<endl;

    cout<<"Printing p_i before + 1 : "<<p_i <<endl;
    p_i = p_i + 1;
    cout<<"Printing p_i after + 1 : "<<p_i <<endl;
    // See the image how memory address changed by 4 bit - july_31/Pointer.png
    // july_31/Pointer.png

}