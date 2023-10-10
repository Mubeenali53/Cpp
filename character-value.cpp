#include<iostream>
using namespace std;
int main()
  {
    char ch;
    cin>>ch;
    if(ch=='p' || ch=='P')
    cout<<"PrepBytes";
    else if(ch=='z' || ch=='Z')
    cout<<"Zenith";
    else if(ch=='e' || ch=='E')
    cout<<"Expert Coder";
    else if(ch=='d' || ch=='D')
    cout<<"Data Structure";
    else
    cout<<"Enter Characters from p,z,e,d";
    return 0;
  }
