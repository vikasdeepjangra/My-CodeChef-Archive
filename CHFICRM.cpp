#include<iostream>

using namespace std;

int main()
    {
        
        int t;
        cin>>t;

        string ans[t];
        int q=0;

        while(t--){
            
            int line[1000];
            int n;
            cin>>n;

            for(int i=0; i<n; i++){
                cin>>line[i];
            }

            int c5=0;
            int c10=0;
            int c15=0;
            bool flag = true;

            for(int i=0; i<n; i++){

                //0the Element
                if(line[0] != 5){
                    flag = false;
                    break;
                }

                //If Coin Given is 5
                if(line[i]==5){
                    c5++;
                }

                else if(line[i]==10){
                    c10++;
                    if(c5>=1){
                        c5--;
                    }
                    else{
                        flag = false;
                        break;
                    }
                }

                else if(line[i]==15){
                    c15++;
                    if(c5>=2 || c10>=1){
                        if(c5>=2)
                            c5-=2;
                        else if(c10>=1)
                            c10--;
                    }
                    else{
                        flag = false;
                        break;
                    }
                }
            }
        
        (flag) ? cout<<"YES\n" : cout<<"NO\n" ;

        }

        return 0;
    }   