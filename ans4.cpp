#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin>>T;
    
    while(T--)
    {
        long long X, Y;
        cin >> X >> Y;

        if(X <= Y)
            cout << Y - X << "\n";

        else
        {
            if(X % 2 == Y % 2)
                cout << (X - Y) / 2 << "\n";

            else
                cout << ((X - Y) / 2) + 2 << "\n";
        }
    }

    return 0;
}
