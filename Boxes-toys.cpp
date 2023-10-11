#include<iostream>
using namespace std;
int main() {
   int n,t,c,s=0;
   cin>>n;
   while(n--)
   {
       cin>>t>>c;
       if(c>=t+2)
       {
        s=s+1;
        }
   }
   cout<<s<<endl;
    return 0;
}
