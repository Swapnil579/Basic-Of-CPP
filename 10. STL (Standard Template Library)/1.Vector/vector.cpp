#include<iostream>
#include<vector>
using namespace std;
int main(){
 //  How to Declare a vector
   vector<int> v;
   cout<<v.size()<<endl; //0
   cout<<v.capacity()<<endl;// 0
//   Insert an element
   v.push_back(1);
   v.push_back(5);
    v.push_back(6);
    cout<<v.size()<<endl; // 3
   cout<<v.capacity()<<endl;// 4
//   How to remove value from elemednt
    v.pop_back();
    cout<<v.size()<<endl; //2
   cout<<v.capacity()<<endl; //4
//     Array
    vector<int>arr={1,2,3,4,5,6}; //vector<int>arr{1,2,3,4,5,6}; It will also work
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" "; //1 2 3 4 5 6
    }
    cout<<endl;
   
    arr.push_back(7);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" "; //1 2 3 4 5 6 7
    }
    
    
    


  return 0;
}