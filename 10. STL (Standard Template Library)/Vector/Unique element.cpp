#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int>v={1,2,3,4,5,1,2,3,4};
  int ans=0;
  for(int i=0;i<v.size();i++){
    ans=ans^v[i];
  }
  cout<<ans;// 5
}