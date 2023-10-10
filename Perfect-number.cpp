#include<iostream>
using namespace std;
 int main()
  {
    int t,n,sum;
    cin>>t;
    while(t--){
      cin>>n;
     sum=0;
      for(int i=1;i<n;i++){
        if(n%i==0){
          sum+=i;
        }
      }
      if(sum==n){
        cout<<"true"<<endl;
      }
      else{
        cout<<"false"<<endl;
      }
    }
    return 0;
  }
