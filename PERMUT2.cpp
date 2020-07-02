#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while(t){

        int n;
        cin>>n;
        if(n == 0){
            break;
        }
        int a[n];

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int b[n];
        int j;
        for(int i=0; i<n; i++){
            j = a[i]-1;
            b[j] = i+1;
        }
        bool flag = true;
        for(int i = 0; i<n; i++){
            if(a[i] != b[i]){
                flag = false;
                break;
            }
        }

        if(flag){
            cout<<"ambiguous"<<endl;
        }
        else{
            cout<<"not ambiguous"<<endl;
        }

    }


    return 0;
}