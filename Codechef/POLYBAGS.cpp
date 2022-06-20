#include <iostream>
using namespace std;

int main() {
	int test,a;
	cin>>test;
	
	for(int i = 0;i<test;i++){
	    cin>>a;
	    int ans1 = (a/10);
	    int ans2 = (a%10);
	    
	    if(ans2==0){
	        cout<<ans1<<endl;
	    }
	    else
	    cout<<ans1+1<<endl;
	}
	return 0;
}
