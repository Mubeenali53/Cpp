#include<iostream>
  using namespace std;
  int main()
  {
    int n,q;
    float p,d,t;
    cin>>n;
    while(n--)
    {
      cin>>q>>p;
    
     if(q>100)
     {
     d=p*0.2;
     p=p-d;
     t=p*q;
     cout<<fixed<<setprecision(1)<<t<<endl;
     }
     else
     {
       t=p*q;
      cout<<fixed<<setprecision(1)<<t<<endl;
      }
    }
    return 0;
  }
