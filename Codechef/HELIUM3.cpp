#include <iostream>
using namespace std;

int main() {
    int x,y,a,b,test;
    cin>>test;
    
    for(int i = 0;i<test;i++){
        cin>>x>>y>>a>>b;
        
        if(x*y <= a*b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
	
	return 0;
}
