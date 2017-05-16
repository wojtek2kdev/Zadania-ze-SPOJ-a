#include <iostream>
 
using namespace std;
 
int nwd(int x, int y){
	if(x>y)
		x-=y;
	else if(y>x)
		y-=x;
	if(x==y)
		return x;
	else
		nwd(x, y);
}
 
int main(){
 
short testy;
int a,b;
	cin>>testy;
for(int i=0; i<testy; i++){
	cin>>a>>b;
	cout<<nwd(a,b)<<endl;
}

return 0;

}
 