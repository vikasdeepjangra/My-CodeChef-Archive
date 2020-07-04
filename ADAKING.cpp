#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int k;
        cin>>k;

        char board[8][8];
        board[0][0] = 'O';
        int count = 1;
        int xcount = 10;
        int xes = 0;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(board[i][j] == 'O')
                    continue;

                if(count<k){
                    board[i][j] = '.';
                    count++;
                }
                else if(xes<xcount){
                    board[i][j] = 'X';
                    xes++;
                }   
                else{
                    board[i][j] = '.';
                }
            }
        }

        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cout<<board[i][j];
            }
            cout<<endl;
        }

    }

    return 0;
}