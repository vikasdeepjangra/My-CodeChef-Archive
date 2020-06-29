#include<iostream>

using namespace std;

int main()
    {
        int t;
        cin>>t;
        int n;
        
        while(t--)
            {
            int rev[10];
            cin>>n;
            int i=0;
            while(n!=0)
                {
                    rev[i]=n%10;
                    n=n/10;
                    i++;
                }

            
            if(rev[0]==0)
                {
                    int k=0;
                    while(rev[k]==0)
                    k++;

                    for(int q=k; q<i; q++)
                        {
                      cout<<rev[q];
                        }
                }
            else
                {
                for(int j=0; j<i; j++)
                    cout<<rev[j];
                }
            cout<<endl;
            }           

        return 0;
}   