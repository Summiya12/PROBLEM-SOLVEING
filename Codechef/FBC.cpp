#include <iostream>
using namespace std;

int main() {
	int test,a,b;
	cin>>test;
	for(int i = 0;i<test;i++){
	    cin>>a>>b;
	    if(a>=b && a!=0){
	        cout<<(a-b)<<endl;
	    }
	}
	return 0;
}
