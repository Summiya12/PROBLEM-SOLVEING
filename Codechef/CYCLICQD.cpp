#include <iostream>
using namespace std;

int main() {
	int test,a,b,c,d;
	
	cin>>test;
	for(int i=0;i<test;i++){
	    cin>>a>>b>>c>>d;
	    int test1 = b+d;
	    int test2 = a+c;
	    if(test1==180 && test2==180){
	        cout<<"YES"<<endl;
	    }
	    else
	     cout<<"NO"<<endl;
	}
	return 0;
}
