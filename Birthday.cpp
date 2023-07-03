#include <iostream>
using namespace std;

int main() 
{
    int T,i,A,B,C,X;
    cout<<"Enter the value of T:";
    cin >> T;
    cout<<"Enter the First element of sequence A:";
    cin>>A;
    cout<<"Enter your Favourite number B:";
    cin>>B;
    cout<<"Enter Difference between two numbers C:";
    cin>>C;
    for (i = 0; i < T; i++)
    {
        X=A;
        while (X <= B)
        {
            if (X == B)
            {
                cout << "YES" << endl;
                break;
            }
            X=X+C;
        }

        if (X > B)
        {
            cout << "NO" << endl;
        }
        break;
    }

    return 0;
}
