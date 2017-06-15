#include <iostream>
 
using namespace std;
 
int main()
{
  int t,s,i=0;
  cin>>t;
  while(t--){
   cin>>s;
   while(s>1){
       if(s%2==1){
        s=s*3+1;   
       }else{
        s/=2;
       }
      i++;
   }
   cout<<i<<endl;
   i=0;
  }
} 