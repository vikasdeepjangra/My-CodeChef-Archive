#include<iostream>

using namespace std;

int factorial(int n)
    {
        if(n==1 || n==0)
            return 1;
    
        return n * factorial(n-1);
    }

int main()
    {
        int t;
        cin>>t;
        int * ans = new int[t];
        int k=0;
        while(t--)
            {
                int n;
                cin>>n;
                ans[k++] = factorial(n);
            }
        for(int i=0; i<k; i++)
            {
                cout<<ans[i]<<endl;
            }

        return 0;
    }   