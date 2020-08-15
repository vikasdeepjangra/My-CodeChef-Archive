#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        
        unordered_map<char, int> m;

        string s, p;
        cin>>s;
        cin>>p;

        for(int i=0; i<p.length(); i++){
            if(m.find(p[i]) == m.end()){
                m[p[i]] = 1;
            }
            else{
                m[p[i]]++;
            }
        }

        for(int i=0; i<s.length(); i++){
            if(m[s[i]] > 0){
                m[s[i]]--;
                s.erase(s.begin()+i);
                i--; 
            }
        }

        sort(s.begin(), s.end());   

        char first = p[0];
        char last = p[p.length()-1];

        int place = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] < first){
                place++;
            }
        }

        string x;
        int tempPlace = place;
        int secondPlace = 0;
        int w,u;

        while(s[tempPlace] == first && tempPlace < s.size()-1){
            tempPlace++;
        }
        
        while(p[secondPlace] == first && secondPlace < p.size()-1){
            secondPlace++;
        }

        if(p[secondPlace] < s[tempPlace]){
            x = s.substr(0, place) + p + s.substr(place, s.size());
        }
        else{
            x = s.substr(0, tempPlace) + p + s.substr(tempPlace, s.size());
        }

        cout<<x<<endl;;
    
    }


    return 0;
}