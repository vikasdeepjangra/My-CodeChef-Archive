#include<iostream>
#include<climits>

using namespace std;

int main()
    {
        int n;
        cin>>n;

        int a[n];
        for(int i=0; i<n; i++)
            {
                cin>>a[i];
            }
        int i=1;
        int count=0;
        int final = a[0];
        while(i<n-1)
            {
            if(a[i] != final)
            {
                int j=i+1;
                if(a[i] == a[j])
                    {
                        for(int q=j; a[q]==a[i]; q++)
                            j++;
                    
                        for(int q=i; q<=j; q++)
                            a[q] = INT_MIN;

                        count++;
                        i=j+1;
                    }   
                
                else{
                    a[i] = INT_MIN;
                    count++;
                    i++;
                }

            }
            else
                {
                    i++;
                }
            }

        cout<<count<<endl;

        return 0;
    }   
