#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int oddcount=0, evencount=0;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2 == 0)
            evencount++;
        else 
            oddcount++;
    }

    if(evencount>oddcount){
        cout<<"READY FOR BATTLE";
    }
    else{
        cout<<"NOT READY";
    }


    return 0;
}