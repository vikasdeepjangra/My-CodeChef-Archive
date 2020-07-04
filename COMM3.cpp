#include <bits/stdc++.h>
#include <cmath>
using namespace std;

bool calculate(int dx, int dy, int r){
    return (dx*dx) + (dy*dy) <= r*r;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {

        int r;
        cin>>r;

        int a,b,c,d,e,f;                        
        cin>>a>>b>>c>>d>>e>>f;
        int num = 0;

        if(calculate((a-c),(b-d),r)){
            num++;
        }

        if(calculate((c-e),(d-f),r)){
            num++;
        }

        if(calculate((e-a),(f-b),r)){
            num++;
        }

        if(num>1){
            cout<<"yes"<<endl;
        }     
    
        else{
            cout<<"no"<<endl;
        }

    }

    return 0;
}