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
        while(n != 0){
            if(n>=2048){
                count += n/2048;
                n = n%2048;
            }
            else if(n>=1024){
                count += n/1024;
                n = n%1024;
            }
            else if(n>=512){
                count += n/512;
                n = n%512;
            }
            else if(n>=256){
                count += n/256;
                n = n%256;
            }
            else if(n>=128){
                count += n/128;
                n = n%128;
            }
            else if(n>=64){
                count += n/64;
                n = n%64;
            }
            else if(n>=32){
                count += n/32;
                n = n%32;
            }
            else if(n>=16){
                count += n/16;
                n = n%16;
            }
            else if(n>=8){
                count += n/8;
                n = n%8;
            }
            else if(n>=4){
                count += n/4;
                n = n%4;
            }
            else if(n>=2){
                count += n/2;
                n = n%2;
            }
            else if(n>=1){
                count += n/1;
                n = n%1;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}