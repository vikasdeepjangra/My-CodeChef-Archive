#include <iostream>
using namespace std;

int main() {
	
	int n;
	int o;
	
	cin>>n>>o;
	
	for(int i=0; i<o; i++){
	    if(n%10==0)
	        n=n/10;
	    else
	        n=n-1;
	}
	
	cout<<n<<endl;
	
	return 0;
}
