#include<iostream>
using namespace std;
  int main()
  {
    int N,i,j;
    i=j;
    cin>>N;
    for(i=5;i>=N;i--){
    for(j=N;j<=i;j++){
    cout<<j;}
    cout<<endl;}
    return 0;
  }
