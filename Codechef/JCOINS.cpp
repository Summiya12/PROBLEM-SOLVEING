#include <iostream>
using namespace std;

int main() {
	int test,a,b;
	cin>>test;
	
	for(int i = 0;i<test;i++){
	    cin>>a>>b;
	     int TOTAL = (a*10) + (b*5);
	    cout<<TOTAL<<endl;
	}
	return 0;
}
