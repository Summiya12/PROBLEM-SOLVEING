#include <iostream>
using namespace std;

int calculations(int a,int b){
    int ans;
    ans = 21-(a+b);
    if(ans<=10){
        return ans;
    }
    else{
      return -1;
    }
}

int main() {
	int test,a,b;
	
	cin>>test;
	for(int i= 0;i<test;i++){
	    cin>>a>>b;
	 int res = calculations(a,b) ;
	 cout<<res<<endl;
	    
	}
	return 0;
}
