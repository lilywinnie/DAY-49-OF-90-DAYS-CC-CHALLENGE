#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin>>T;
    
    while(T--)
    {
        int N;
        cin>>N;
        
        int A[N];
        for(int i=0; i<N; i++)
        {
            cin>>A[i];
        }
        
        int minCost = 1e9;
        for(int i=0; i<N-1; i++)
        {
            int currentCost = A[i]+A[i+1];
            minCost = min(minCost, currentCost);
        }
        
        cout<<minCost<<"\n";
    }
}
