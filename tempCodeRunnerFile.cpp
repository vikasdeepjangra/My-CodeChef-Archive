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

            long count = 0;

            if(s>t){
                s = s%t;
                count = s/t;
                if(s%2==0)
                    count++;
                else
                    count+=2;
            }


            if(s<=t){
                count = 1;
                printf("%ld\n", count);
                continue;
            }
        
                
            printf("%ld\n", count);
        
        }


        return 0;
    }   