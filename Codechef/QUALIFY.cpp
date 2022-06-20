#include <iostream>
using namespace std;

int main() {
	int Test,a,b,c;
	
	cin>>Test;
	for(int i = 0;i<Test;i++){
	    cin>>a>>b>>c;
	    if(b*1+c*2>= a){
	        cout<<"Qualify"<<endl;
	    }
	    else{
	        cout<<"NotQualify"<<endl;
	    }
	}
	return 0;
}
