#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    int ans=0;
    for(int i=1; i<=n; i++){
        ans += i;
    }
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int d, n;
        cin>>d>>n;

        for(int i=0; i<d; i++){
            n = sum(n);
        }

        cout<<n<<endl;
        
    }

    return 0;
}