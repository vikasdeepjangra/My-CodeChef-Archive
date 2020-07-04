#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        vector<long long> v(n);

        for(int i=0; i<n; i++){
            cin>>v.at(i);
        }

        long long i=0, j=1;
        long long count = 0;
        long long temp = 0;
        while(j<v.size()){
            if(v[i] == v[j]){
                i++;
                j++;
                continue;
            }
            temp = abs(v[j++] - v[i++]) - 1;
            count += temp;
        }
        cout<<count<<endl;
    }

    return 0;
}