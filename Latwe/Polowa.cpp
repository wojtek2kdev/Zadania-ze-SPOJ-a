#include <iostream>
using namespace std;
 
int main() {
	
	short t;
	string napis;
	cin>>t;
	while(t--){
	 cin>>napis;
	 for(int i=0; i<(napis.size()/2)-1; i++){
	 	cout<<napis[i];
	 }
	 cout<<napis[(napis.size()/2)-1]<<endl;
	}
 
	return 0;
} 