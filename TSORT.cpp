#include<iostream>

using namespace std;

int main()
    {
        int t;
        cin>>t;
        int k=0;
        int * a = new int[t];
        while(t--)
            {
                cin>>a[k];
                k++;
            }
        sort(a, a+k);

        for(int i=0; i<k; i++)
            cout<<a[i]<<endl;

        return 0;
    }   