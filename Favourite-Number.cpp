#include<iostream>
  using namespace std;
  
  int main()
  {
    int t,n,x,y;
    cin>>t;
    while(t--)
    {
      cin>>x;
      y=0;
      while(x!=0)
      {
       n=x%10;
       if(n==5)
       y++;
       x=x/10;
      }
      cout<<y;
    }
    
    return 0;
  }
