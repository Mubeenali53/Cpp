#include<iostream>
using namespace std;
  int main()
  {
    int x,y,z;
    cin>>x>>y>>z;
    if(x<y&&y<z)
    cout<<y;
    if(y<x&&x<z)
    cout<<x;
    if(x<z&&z<y)
    cout<<z;
    return 0;
  }
