#include <iostream>
using namespace std;

int main() 
{
    int T,i,A,B,C,X;
    cin>>T;
    cin>>A;
    cin>>B;
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
