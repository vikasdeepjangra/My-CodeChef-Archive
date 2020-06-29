#include<iostream>

using namespace std;

int main()
    {
        int t;
        cin>>t;

        int ans[t];
        int q=0;

        while(t--){

            int tr=0, cp=0, change=0; 
            int n,k;
            cin>>n>>k;
            int arr[10000];
            for(int i=0; i<n; i++){
                cin>>arr[i];
                tr+=arr[i];

                if(arr[i]>k)
                    cp+=k;
                else 
                    cp+=arr[i];
            }
            change = tr - cp;

            ans[q++] = change; 
            }
        for(int i=0; i<q; i++)
            cout<<ans[i]<<endl;

        return 0;
    }   