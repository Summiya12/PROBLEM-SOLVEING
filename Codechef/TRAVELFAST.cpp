#include <iostream>
using namespace std;

int main() {
	 int x,y,test;
	 
	 cin>>test;
	 
	 for(int i = 0;i<test;i++){
	     cin>>x>>y;
	     
	     if(x>y)
	       cout<<"CAR"<<endl;
	     else if(x==y)
	       cout<<"SAME"<<endl;
	     else
	       cout<<"BIKE"<<endl;
	 }
	 
	
	return 0;
}
