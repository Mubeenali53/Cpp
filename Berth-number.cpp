#include <iostream>
  using namespace std;
  
  int main()
  {
    int t,i,n,s;
    cin>>t;
    for(i=0;i<t;i++){
      cin>>n;
      s=n%8;
      switch(s){
        case 1: cout<<n+3<<"LB"<<endl;
                break;
        case 2: cout<<n+3<<"MB"<<endl;
                break;
        case 3: cout<<n+3<<"UB"<<endl;
                break;
        case 4: cout<<n-3<<"LB"<<endl;
                break;
        case 5: cout<<n-3<<"MB"<<endl;
                break;
        case 6: cout<<n-3<<"UB"<<endl;
                break;
        case 7: cout<<n+1<<"SU"<<endl;
                break;
        case 0: cout<<n-1<<"SL"<<endl;
                break;
        default: cout<<"Invalid"<<endl;
                        
      }
    }
    return 0;
  }
