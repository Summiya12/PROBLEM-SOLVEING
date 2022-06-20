#include <iostream>
using namespace std;

int main() {
	int Test,a;
	
	
	cin>>Test;
	for(int i = 0;i<Test;i++){
	    cin>>a;
	    if(a%4 == 0){
	        cout<<"Good "<<endl;
	    }
	    else{
	        cout<<"Not Good"<<endl;
	    }
	}
	return 0;
}
