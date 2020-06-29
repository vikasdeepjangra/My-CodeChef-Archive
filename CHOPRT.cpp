#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    int A, B;
	    
	    cin>>A>>B;
	    
        if(A>B)
            cout<<">\n";
        else if(A<B)
            cout<<"<\n";
        else
            cout<<"=\n";
    }
	
	return 0;
}
