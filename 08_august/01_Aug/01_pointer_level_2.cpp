#include <bits\stdc++.h>
using namespace std;

int main () {

    int arr[10] = {11, 199, 99, 34, 543};
    cout<<"Address of first memory block is (by arr) : "<<arr <<endl;
    cout<<"Address of first memory block is (by &arr[0]) : "<<&arr[0] <<endl;
    cout<<"------------------------------------------------"<<endl;

    cout<<"arr stored a address so print the value of that address (by *arr) : "<<*arr <<endl;
    cout<<"Value of 0th index + 1 -  (by - *arr + 1) : "<<*arr + 1 <<endl;
    cout<<"Value at 1st index -  (by - *(arr + 1)) : "<<*(arr + 1) <<endl;
    cout<<"Value of 0th index + 1 -  (by - *(arr) + 1) : "<<*(arr) + 1 <<endl;
    cout<<"Formula 1 -> arr[i] == *(arr + i), see :: "<<arr[2]<<" == "<< *(arr + 2) <<endl;
    cout<<"Formula 2 - We can write this as -> i[arr] == *(i + arr), see :: "<<2[arr] <<" == "<< *(2 + arr) <<endl;
    cout<<"------------------------------------------------"<<endl;

    int temp[10];
    cout<<"Sizeof temp : "<<sizeof(temp) <<endl;
    int *p_temp = &temp[0];
    cout<<"Sizeof pointer - p_temp : "<<sizeof(p_temp) <<endl;
    cout<<"Sizeof value at - *p_temp : "<<sizeof(*p_temp) <<endl;
    cout<<"Sizeof first value - &temp[0] : "<< &temp[0] <<endl;
    cout<<"Sizeof pointer address - &p_temp : "<<sizeof(&p_temp) <<endl;
    cout<<"------------------------------------------------"<<endl;

    int arr2[] = {4,3,5,6};
    cout<< "Print address of arr2 by 3 ways : "<< endl; 
    cout<< "&arr2[0] : " << &arr2[0] << endl; 
    cout<< "&arr2    : " << &arr2 << endl; 
    cout<< "arr2     : " << arr2 << endl;
    int *ptr_arr2 = &arr2[0];
    cout<< "Same if we try with pointer : "<< endl; 
    cout<< "ptr_arr2  : " << ptr_arr2 << endl; 
    cout<< "*ptr_arr2 : " << *ptr_arr2 << endl; 
    cout<< "&ptr_arr2 : " << &ptr_arr2 << endl;
    cout<<"------------------------------------------------"<<endl;

    cout<< "Symbol tables content cannot change : "<< endl; 
    // arr2 = arr2 + 1;
    cout<< "ERROR -> arr2 = arr2 + 1 " << endl; 

    cout<< "Possible with pointer : "<< endl; 
    cout<< "ptr_arr2                : "<< ptr_arr2 << endl; 
    ptr_arr2 = ptr_arr2 + 1;
    cout<< "ptr_arr2 = ptr_arr2 + 1 : "<< ptr_arr2 << endl; 



    return 0;
}