#include<iostream>
#include<cstring>
using namespace std;

int main()
    {
        int t;
        cin>>t;
        int ans[t];
        int q=0;
        char s[100000];

        while(t--){
            cin>>s;
            int count=0;
            int i=0;
            while(i<strlen(s))
                {
                    if(s[i]=='x' && s[i+1]=='y')
                        {
                            count++;
                            i+=2;
                        }
                    else if(s[i]=='y' && s[i+1]=='x'){
                        count++;
                        i+=2;
                    }
                    else{
                        i++;
                    }
                        
                }
            ans[q++]=count;

            }
        for(int i=0; i<q; i++)
            cout<<ans[i]<<endl;

        return 0;
    }   