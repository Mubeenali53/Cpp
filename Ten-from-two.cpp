#include<iostream>
using namespace std;
int main ()
{
  int t,n,c;
  cin>>t;
  while (t--)
  {
    cin>>n;
    c=0;
  }
  if(n%10==0)
  cout<<c<<'\n';
  else
  n=n*2;
  c+=1;
  cout<<c<<'\n';
  if(n%10!=0)
  c=-1;
  cout<<c<<'\n';
  return 0;
}
