#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t; 
    while(t--){
        ll N, K;
        cin>>N>>K;

        ll count = INT_MAX;
        ll value = INT_MAX;

        for(ll i=0; i<N; i++){
            ll a;
            cin>>a;
            if(K%a == 0){
                ll tempcount = (K/a) - 1;
                ll tempvalue = a;
                if(tempcount < count){
                    count = tempcount;
                    value = tempvalue;
                }
            }
        }

        if(count != INT_MAX)
            cout<<value<<endl;
        else 
            cout<<-1<<endl;
    }

    return 0;
}