#include <iostream>
 
using namespace std;
 
int main()
{
 
int t, x, y;
cin>>t;
while(t--){
 cin>>x>>y;
 while(x!=y){
  if(x>y)
   x-=y;
  else
   y-=x; 
 }
 cout<<x+y<<endl;
}
 
} 