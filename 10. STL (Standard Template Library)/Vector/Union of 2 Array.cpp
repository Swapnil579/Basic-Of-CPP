#include<iostream>
#include<vector>
using namespace std;
int main(){
  int arr[]={1,2,3};
  int sizea=3;
  int brr[]={4,5,6};
  int sizeb=3;

  vector<int>ans;

  // Push all the element of an array into a vector
  for(int i=0;i<sizea;i++){
    ans.push_back(arr[i]);
  }
  // Push all the element of an array into a vector
  for(int i=0;i<sizeb;i++){
    ans.push_back(brr[i]);
  }

  for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";  // 1 2 3 4 5 6
  }

}


// Create an array with size 
// Create an vector
// Push all the element of an array into a vector
// Done