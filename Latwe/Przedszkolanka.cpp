#include <iostream>
 
using namespace std;
 
int main(){
short testy, a, b;
int cuksy=10;
cin>>testy;
while(testy--){
cin>>a>>b;
while((cuksy%a!=0)||(cuksy%b!=0))
cuksy++;
cout<<cuksy<<endl;
cuksy=10;
}
return 0;
} 