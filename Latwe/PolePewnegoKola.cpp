#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main(){
	
double r,d,rk;
while(cin>>r>>d){
	rk = (r*r)-((d/2)*(d/2));
	cout<<fixed<<setprecision(2)<<rk*3.141592654<<endl;
}

}