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

        vector<int> v;

        while(n != 0){
            v.push_back(n%10);
            n=n/10;
        }

        int i=0, j=v.size()-1;
        bool flag = true;
        while(i<j){
            if(v[i] != v[j]){
                flag = false;
                break;
            }
            i++;
            j--;
        }

        if(flag == false){
            cout<<"loses"<<endl;
        }
        else{
            cout<<"wins"<<endl;
        }
    
    }
    return 0;
}