#include<iostream>

using namespace std;

int main()
    {
        int t;
        cin>>t;
        int sum[1000];
        int x=0;
        while(t--){
            
            int n;
            cin>>n;
            int temp=0;
            for(int i=0; n!=0; i++){
                temp = temp + (n%10);
                n=n/10;
            }
            sum[x]=temp;
            x++;
        }
        for(int i=0; i<x; i++)
            {
                cout<<sum[i]<<endl;
            }      

        return 0;
    }   
