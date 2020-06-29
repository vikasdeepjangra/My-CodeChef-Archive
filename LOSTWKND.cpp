#include<iostream>

using namespace std;

int main()
    {
        int t;
        cin>>t;
        int ans[10000];
        int k;
        while(t--)
            {
                int a[5];
                for(int i=0; i<5; i++)
                    cin>>a[i];
                int p;
                cin>>p;
                int total=0;
                for(int i=0; i<5; i++)
                    {
                        a[i]*=p;
                        total+=a[i];
                    }
                if(total>120)
                    ans[k++]=1;
                else
                    ans[k++]=0;
                }
        for(int i=0; i<k; i++)
            {
                if(ans[i]==1)
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;
            }

        return 0;
    }   