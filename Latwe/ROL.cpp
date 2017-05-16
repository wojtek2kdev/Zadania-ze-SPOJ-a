#include <iostream>
using namespace std;
 
int main() {
	
	short t;
	int ile, *liczby, *liczby2;
	cin>>t;
	while(t--){
		cin>>ile;
		liczby = new int[ile];
		liczby2 = new int[ile];
		for(int i=0; i<ile; i++){
			cin>>liczby[i];
		}
		liczby2[ile-1] = liczby[0];
		for(int i=1; i<ile; i++){
		 liczby2[i-1] = liczby[i];	
		}
		for(int i=0; i<ile-1; i++){
			cout<<liczby2[i]<<" ";
		}
		cout<<liczby2[ile-1]<<endl;
	}
 
	return 0;
} 