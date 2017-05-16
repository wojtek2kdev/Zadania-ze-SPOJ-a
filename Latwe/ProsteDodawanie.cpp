#include <iostream>
 
using namespace std;
 
int main(){
 
int testy, *liczby, ile;
	cin>>testy;
for(int i=0; i<testy; i++){
	cin>>ile;
	liczby = new int[ile];
	int liczba=0;
	for(int l=0; l<ile; l++){
		cin>>liczby[l];
		liczba+=liczby[l];
	}
	cout<<liczba<<endl;
}

return 0;

}