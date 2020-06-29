#include<iostream>

using namespace std;

int main()
    {
        int n;
        cin>>n;
        
        int p1=0, p2=0; 
        int x=0,y=0;

        int w=0, lead=0;

        for(int i=0; i<n; i++)
            {
                cin>>x>>y;
                p1+=x;
                p2+=y;

                if((p1-p2)>0)
                    {
                        if(lead<(p1-p2))
                            {
                                lead = p1-p2;
                                w = 1;
                            }
                    }
                else
                    {
                        if(lead<(p2-p1))
                            {
                                lead = p2-p1;
                                w=2;
                            }
                    }
            }
        cout<<w<<" "<<lead;
        return 0;
    }   