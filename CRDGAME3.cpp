#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    
    while(t--){

        int pc, pr;
        cin>>pc>>pr;

        int c, r;

        if(pc%9 == 0){
            c = pc/9;
        }
        else{
            c = (pc/9) + 1;
        }

        if(pr%9 == 0){
            r = pr/9;
        }
        else{
            r = (pr/9) + 1;
        }

        if(c<r){
            cout<<0<<" "<<c<<endl;
        }
        else{
            cout<<1<<" "<<r<<endl;
        }

    }


    return 0;
}