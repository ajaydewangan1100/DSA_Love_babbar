#include <bits\stdc++.h>
using namespace std;

void print (int *p) {
    cout<< "Address : " << p <<endl;
    cout<< "Value   : " << *p <<endl;
}

void update_ptr(int *p) {
    p = p + 1;
    cout<< "ptr_v -> Inside update_ptr  :  " << p << endl;
}

void update_value(int *p) {
    *p = *p + 1;
    cout<< "value -> Inside update_value  :  " << *p << endl;
}

int getSum(int arr1[], int s) {
    int sum  = 0;
    for( int i = 0; i < s; i++) {
        sum += arr1[i];
    }
    return sum;
}

int main () {
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout<< "arr - will print address of arr[0] : "<< arr << endl;
    cout<< "ch - will print full char arr      : "<< ch << endl;
    char *ptr_ch = ch;
    cout<< "char *ptr_ch = ch -> ptr_ch        : "<< ch << endl;
    char *ptr_ch2 = &ch[0];
    cout<< "char *ptr_ch = &ch[0] -> ptr_ch2   : "<< ch << endl;
    cout<<"------------------------------------------------"<<endl;

    char temp = 'b';
    cout<< "char temp = 'a' -> temp          : "<< temp << endl;
    char *ptr_temp = &temp;
    cout<< "char ptr_temp = temp -> ptr_temp : "<< ptr_temp << endl;
    cout<<"------------------------------------------------"<<endl;

    int value = 50;
    int *ptr_v = &value;
    print(ptr_v);

    cout<< "ptr_v -> Before update      :  "<< ptr_v << endl;
    update_ptr(ptr_v);
    cout<< "ptr_v -> Before update      :  "<< ptr_v << endl;
    
    cout<< "value -> Before update        :  "<< value << endl;
    update_value(ptr_v);
    cout<< "value -> Before update       :  "<< value << endl;
    cout<<"------------------------------------------------"<<endl;
    
    int arr1[6] =  {2,2,2,2,2,2};
    cout<< "Sum -> getSum(arr1, 6)     : "<< getSum(arr1, 6) <<endl;
    cout<< "Sum -> getSum(arr1 + 3, 3) : "<< getSum(arr1 + 3, 3) <<endl;
    cout<< "So we understand that array is passed by reference !!!" << endl;


    return 0;
}