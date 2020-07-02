#include <bits/stdc++.h>
using namespace std;

int hcf(long long a, long long b){

    if(b == 0){
        return a;
    }
    return hcf(b, a%b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        long long a,b;
        cin>>a>>b;
        long long min, max;

        if(a>b){
            max = a;
            min = b;
        }
        else{
            max = b;
            min = a;
        }
        
        long long gcd = hcf(max, min);
        long long lcm = (a*b)/gcd;

        cout<<gcd<<" "<<lcm<<endl;

    }

    return 0;
}