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

        string s;
        cin>>s;

        bool flag = true;

        for(int i=0; i<s.size(); i++){
            if(s[i] != 'N'){
                if(s[i] == 'Y'){
                    cout<<"NOT INDIAN\n";
                    flag = false;
                    break;
                }
                else if(s[i] == 'I'){
                    cout<<"INDIAN\n";
                    flag = false;
                    break;
                }
            }
        }

        if(flag == true){
            cout<<"NOT SURE\n";
        }

    }

    return 0;
}