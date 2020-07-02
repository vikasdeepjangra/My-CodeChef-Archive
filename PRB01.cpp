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

        int count = 0;

        for(int i=1; i<n/2; i++){
            if(n%i == 0){
                count++;
            }
        }

        if(n==1){
            cout<<"no"<<endl;
        }
        if(count>1){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }

    }

    return 0;
}