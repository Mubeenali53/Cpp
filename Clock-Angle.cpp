#include<iostream>
  using namespace std;
  int main()
  {
  int T,h,m;
    float deg;
    cin>>T;
    while(T--){
    cin>>h>>m;
    h = (h*30) + (m*0.5);
    m = m*6;
    deg = abs(h-m);
    if(deg>180)
      cout<<360-deg<<endl;
    else
      cout<<deg<<endl;
  }   
    return 0;
  }
