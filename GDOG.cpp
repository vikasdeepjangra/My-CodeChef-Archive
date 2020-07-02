#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n,k;

        cin>>n>>k;
        int ans;
        for(int i=1; i<=k; i++){
            if(n%i > ans){
                ans = n%i;
            }
        }

        cout<<ans<<endl;

    }


    return 0;
}