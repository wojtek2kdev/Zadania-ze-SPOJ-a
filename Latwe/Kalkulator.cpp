#include <iostream>
 
using namespace std;
 
int main(){
	
int x,y;
char z;

while(cin>>z>>x>>y){
	switch(z){
		case '+':
			cout<<x+y<<endl; break;
		case '-':
			cout<<x-y<<endl; break;
		case '*':
			cout<<x*y<<endl; break;
		case '/':
			cout<<x/y<<endl; break;
		case '%':
			cout<<x%y<<endl; break;
	}
}

}