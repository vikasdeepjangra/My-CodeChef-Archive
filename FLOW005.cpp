#include<iostream>

using namespace std;

int main()
    {
        int t;
        cin>>t;

        while(t--){
            int n;
            cin>>n;
            int note=0;
            while(n != 0)
            if(n>=100)
                {
                    note+=n/100;
                    n%=100;
                }
            else if(n>=50)
                {
                    note+=n/50;
                    n%=50;
                }
            else if(n>=10)
                {
                    note+=n/10;
                    n%=10;
                }
            else if(n>=5)
                {
                    note+=n/5;
                    n%=5;
                }
            else if(n>=2)
                {
                    note+=n/2;
                    n%=2;
                }
            else if(n>=1)
                {
                    note+=n/1;
                    n%=1;
                }

            cout<<note<<endl;
        }

        return 0;
    }   