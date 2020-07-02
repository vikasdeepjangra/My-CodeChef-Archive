#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a.at(i);
        }

        int gcd = 1;

        for(int i=2; i<=1000; i++){
            for(int j=0; j<a.size(); j++){
                if(a[j] % i != 0){
                    gcd = 1;
                    break;
                }
                else
                    gcd = i;
            }
        }

        for(int i=0 ; i<a.size(); i++){
            a.at(i) /= gcd;
            cout<<a.at(i)<<" ";
        }
        cout<<endl;
    }

    return 0;
}