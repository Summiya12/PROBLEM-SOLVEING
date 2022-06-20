#include <iostream>
using namespace std;

int Answer(int a,int b){
    int ans1 = b/2;
    int ans2 = a-b;
    int final = ans1+ans2;

    return final;
}

int main() {
    int a,b,res;
    cin>>a>>b;

    res = Answer(a,b);
    cout<<res;

	return 0;
}