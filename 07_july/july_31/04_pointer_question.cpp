#include <iostream>
using namespace std;
int main()
{ 
  char *ptr; 
  char Str[] = "abcdefg";
  ptr = Str;   // Same as :- char *ptr = Str
  cout<<"ptr : "<<ptr<<" - Str : "<<Str<<endl;
  ptr += 5;
  cout << ptr;
  return 0;
}