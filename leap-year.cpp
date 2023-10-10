#include<iostream>
using namespace std;
int main()
  {
    int t,n;
    cin>>t;
    while(t--)
    {
      cin>>n;
      if(n%400==0&&n%100==0)
      cout<<"Yes";
      else if(n%4==0&&n%100!=0)
      cout<<"Yes";
      else
      cout<<"No";
    }
    return 0;
  }
