#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    if(n%4 == 0){
        n++;
    }
    else{
        n--;
    }

    cout<<n<<endl;

    return 0;
}