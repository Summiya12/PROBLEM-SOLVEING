#include <iostream>
using namespace std;


int main() {
      int test,woman,a;


      cin>>test;
      while(test--)
        {
        int sum = 0;
        cin>>woman;
        for(int i = 0;i<woman;i++)
          {
          cin>>a;
          if(a>=10 && a<=60){
            sum +=1;
          }
          }
         cout<<sum<<endl;
      }
	return 0;
}