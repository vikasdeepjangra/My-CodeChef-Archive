#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    cout<<setprecision(6)<<fixed;
    while(t--){

        int q;
        int p;
        cin>>q>>p;
        double ans = p*q;
        if(q>1000){
            ans -= (ans*0.1);
        }

        cout<<ans<<endl;
    }


    return 0;
}