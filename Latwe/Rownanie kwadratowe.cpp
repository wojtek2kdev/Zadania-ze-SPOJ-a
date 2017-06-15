#include <iostream>
 
using namespace std;
 
int main()
{
float a,b,c,d;
while(cin>>a>>b>>c){
 d = (b*b) - (4*a*c);
 if(d>0) cout<<2<<endl;
 else if(d==0) cout<<1<<endl;
 else cout<<0<<endl;
}
}