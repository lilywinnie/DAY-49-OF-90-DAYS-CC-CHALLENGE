#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    while (cin >> n && n != 0)
    {
        int a[n + 1];

        for (int i = 1; i <= n; i++) 
            cin >> a[i];

        bool ok = true;

        for (int i = 1; i <= n; i++)
        {
            if (a[a[i]] != i)
            {
                ok = false;
                break;
            }
        }

        if (ok) 
            cout << "ambiguous\n";
        else 
            cout << "not ambiguous\n";
    }

    return 0;
}
