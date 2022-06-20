#include <iostream>
using namespace std;

int maximum(int a,int b,int c,int d){
     int ans1 =abs(a-c) ;
     int ans2 = abs(b-d);
    if(ans1>ans2){
        return ans1;
    }
    else
      return ans2;
}

int main() {
    int test,a,b,c,d;
    
    cin>>test;
    for(int i= 0;i<test;i++){
        cin>>a>>b>>c>>d;
        int res = maximum(a,b,c,d);
        cout<<res<<endl;
    }
	
	return 0;
}
