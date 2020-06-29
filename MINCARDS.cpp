#include<iostream>

using namespace std;

int main()
    {
        int n;
        cin>>n;
        char s[n];
        int count=0;

        for(int i=0; i<n; i++)
            {
                cin>>s[i];
                if(i != 0){
                    if(s[i]==s[i-1]){
                        count++;
                    }
                }
            
            }
        cout<<count<<endl;
        return 0;
    }   