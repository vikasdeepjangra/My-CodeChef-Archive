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
            cin>>a[i];
        }

        sort(a.begin(), a.end());

        cout<<a.at(0)+a.at(1)<<endl;

    }

    return 0;
}