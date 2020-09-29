#include <bits/stdc++.h>
#include <unordered_map>
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
        int a[n];
        int count = 0;
        unordered_map<int, int> m;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(m.find(a[i]) == m.end()){
                m[a[i]] = 1;
                count++;
            }
            else{
                m[a[i]]++;
            }
        }


        cout<<m.size()<<endl;

    }

    return 0;
}