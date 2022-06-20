#include<iostream>
using namespace std;


int main(){

int test,a,b,c;
cin>>test;

while(test--){
    cin>>a>>b>>c;
    
    int ans1 = b*3;
    int ans2 = (a-b) * -1;
    int res =(ans1+ans2);
    
    if(res<c){
        cout<<"FAIL"<<endl;
    }
    else
    cout<<"PASS"<<endl;
}
return 0;
}