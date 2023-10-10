#include<iostream>
  using namespace std;
  int main()
  {
    char ch;
    int i,j;
    cin>>ch;
    for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
    cout<<j;}
    for(j = 2*i;j<=10;j++)
      {
        cout <<" ";
      }
      for(j = i; j>= 1; j--)
      {
        cout << j;}
    cout<<endl;}
  return 0;
  }
