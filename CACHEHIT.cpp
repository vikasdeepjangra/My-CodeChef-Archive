#include<iostream>

using namespace std;

int main()
    {
        int t;
        cin>>t;
        
        while(t--){

            int n, b, m;
            cin>>n;
            cin>>b;
            cin>>m;

            int arr[m];
            for(int i=0; i<m; i++)
                cin>>arr[i];

            int count = 1;
            int block = arr[0]/m;

            for(int i=1; i<m; i++){
                
                if(arr[i]/m != block){
                    count++;
                    block = arr[i]/m; 
                }

            }

            cout<<count<<endl;

        }
    

        return 0;
    }   