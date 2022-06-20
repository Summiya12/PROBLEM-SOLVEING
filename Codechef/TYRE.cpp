#include <iostream>
using namespace std;

int main() {
	int test,a,b;
	
    cin>>test;
    for(int i = 0;i<test;i++){
        cin>>a>>b;
        int ans1 = a*2;
        int ans2 = b*4;
        int total = ans1+ans2;
        cout<<total<<endl;
    }
	return 0;
}
