#include <iostream>
using namespace std;

int main() {
	int Test ,a,b;

	cin>>Test;
	for(int i = 0;i<Test;i++){
	    cin>>a>>b;
	    if(a<b){
	        cout<<0<<endl;
	    }
	    else {
	        int ans = a/b;
	        cout<<ans<<endl;
	    }
	}
	return 0;
}