#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){

        int n, m, k;
        cin>>n>>m>>k;

        int d = abs(n-m);

        int ans = d - k;

        if(ans<0){
            ans = 0;
            cout<<ans<<endl;
        }
        else{
            cout<<ans<<endl;
        }

    }

    return 0;
}