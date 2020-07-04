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

        int chef[n], morty[n];

        for(int i=0; i<n; i++){
            cin>>chef[i]>>morty[i];
        }

        int winpoints = 0;
        int win;
        int cpoints = 0;
        int mpoints = 0;

        for(int i=0; i<n; i++){

            int c = chef[i];
            int m = morty[i];

            int temp1 = 0;

            if(c > 9){
                while(c > 9){
                    temp1 += c%10;
                    c = c/10;
                }
                c += temp1;
            }

            int temp2 = 0;

            if(m > 9){
                while(m > 9){
                    temp2 += m%10;
                    m = m/10;
                }
                m += temp2;
            }

            if(m>c){
                mpoints++;
            }
            else if(m<c){
                cpoints++;
            }
            else{
                mpoints++;
                cpoints++;
            }
        }

        if(cpoints>mpoints){
            winpoints = cpoints;
            win = 0;
        }
        else if(cpoints<mpoints){
            winpoints = mpoints;
            win = 1;
        }
        else if(cpoints == mpoints){
            winpoints = mpoints;
            win = 2;
        }

        cout<<win<<" "<<winpoints<<endl;

    }

    return 0;
}