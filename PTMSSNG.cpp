#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll getOddOccurrence(ll ar[], ll ar_size) 
{ 
    ll res = 0;  
    for (ll i = 0; i < ar_size; i++)      
        res = res ^ ar[i]; 
      
    return res; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    
    while(t--){

        ll n;
        cin>>n;
        ll size = ((4*n) - 1);

        ll x[size];
        ll y[size];

        for(int i=0; i<size; i++){
            cin>>x[i]>>y[i];
        }

        ll xc = getOddOccurrence(x,size);
        ll yc = getOddOccurrence(y,size);

        cout<<xc<<" "<<yc<<endl;

    }

    return 0;
}