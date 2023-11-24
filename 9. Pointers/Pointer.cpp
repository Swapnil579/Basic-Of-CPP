//  Pointer is used to store the address of variable
#include <iostream>
using namespace std;
int main()
{
  int a = 10;
  int *ptr = &a;
  cout << a << endl;   // 10
  cout << &a << endl;  // 0x7fff137a5400
  cout << ptr << endl; // 0x7fff137a5400
  cout << *ptr;        // 10
  return 0;
}
