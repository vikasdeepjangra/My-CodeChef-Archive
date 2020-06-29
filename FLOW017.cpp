#include<iostream>
#include<algorithm>
using namespace std;

int main()
    {
        int t;
        cin>>t;
        int * ans = new int[t];
        int k=0;
        while(t--)
            {
                int a[3];
                for(int i=0; i<3; i++)
                    cin>>a[i];
                sort(a, a+3);
                ans[k++]=a[1];
            }
        for(int i=0; i<k; i++)
            cout<<ans[i]<<endl;

        return 0;
    }   