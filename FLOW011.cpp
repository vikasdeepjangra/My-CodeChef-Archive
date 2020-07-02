#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    cout<<setprecision(2)<<fixed;

    while(t--){

        double bs;
        cin>>bs;
        double hra=0, da=0;

        if(bs<1500){
            hra = (0.1*bs);
            da = (0.9*bs);
        }
        else{
            hra = 500.0;
            da = (0.98*bs);
        }

        double gross = bs+hra+da;

        cout<<gross<<endl;

    }

    return 0;
}