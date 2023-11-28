#include<iostream>
using namespace std;
int main(){
  int arr[]={1,2,3,4,5,6};
  int size=6;
    int *ptr=arr;
    cout<<*ptr+1<<endl;
    cout<<endl;
//     Print the address of an Array
  for(int i=0;i<size;i++){
    cout<<arr+i<<endl;
  }
    cout<<endl;
//     Print the value of an Array
    for(int i=0;i<size;i++){
    cout<<*arr+i<<endl;
  }
    cout<<endl;
//     Print the Value of an Array
    for(int i=0;i<6;i++){
        cout<<*ptr<<endl;
        ptr++;
    }
        
  return 0;
  }