#include <iostream>
 
using namespace std;
 
int main(){
 
short testy, ile;
int *liczby, *liczbyodw;
	cin>>testy;
for(int i=0; i<testy; i++){
	cin>>ile;
	liczby = new int[ile];
for(int i=0; i<ile; i++){
	int liczba;
		cin>>liczba;
	liczby[i] = liczba;
}
	liczbyodw = new int [ile];
for(int i=ile-1; i>=0; i--){
	liczbyodw[i] = liczby[(ile-1)-i];
}
for(int i=0; i<ile; i++){
	cout<<liczbyodw[i]<<" ";
}
cout<<endl;
}
return 0;
}