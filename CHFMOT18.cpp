#include<iostream>

using namespace std;

int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int a;
        scanf("%d", &a);

        while(a--){

            long s,t;
            scanf("%ld", &s);    
            scanf("%ld", &t);
            long count;

            if(s%2 == 0)
                count = 0;
            else{
                count = 1;
                s=s-1;
            }            
            
            if(s>t){
                count += s/t;
                s %= t;
            }

            if(s<=t && s!=0){
                if(s%2 == 0)
                    count += 1;
                else    
                    count += 2;
            }

            cout<<count<<endl;

        }


        return 0;
    }   