#include<iostream>

using namespace std;

int main()
    {

        int t;
        cin>>t;

        while(t--)
        {
            int n;
            cin>>n;

            long long even[n*n];
            int e=0;
            long long odd[n*n];
            int o=0;

            for(int i=1; i<=(n*n); i++)
                {
                    if(i%2==0){
                        even[e] = i;
                        e++;
                    }
                    else{ 
                        odd[o] = i;
                        o++;
                    }
                }

            int output[n][n];

            e=0;
            o=0;

            for(int i=0; i<n; i++)
            {
                
                if(i%2==0)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(j%2==0){
                            output[i][j]=odd[o++];
                        }
                        else{
                            output[i][j]=even[e++];
                        }
                    }
                }

                else
                {
                    for(int j=0; j<n; j++)
                    {
                        if(j%2==0){
                            output[i][j]=even[e++];
                        }
                        else{
                            output[i][j]=odd[o++];
                        }
                    }
                }
            }


            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                    {
                        cout<<output[i][j]<<" ";
                    }
                cout<<endl;
            }

        }        
        return 0;
    }   