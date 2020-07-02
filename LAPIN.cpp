#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        
        int left[27]={0}, right[27]={0};

        string x;
        cin>>x;

        for(int i=0; i< ((x.size())/2); i++){
            left[x[i]-'a']++;
        }
        
        for(int i = ((x.size()+1)/2); i<x.size(); i++){
            right[x[i]-'a']++;
        }

        bool flag = true;

        for(int i=0; i<27; i++){
            if(left[i] != right[i]){
                flag = false;
                break;
            }
        }

        if(flag == true){
            cout<<"YES\n";
        }
        else{
           cout<<"NO\n";
        }

    }

    return 0;
}