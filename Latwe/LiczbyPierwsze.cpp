#include <iostream>
 
using namespace std;
 
bool lPierwsza(int x){
 
int i=x-1,c;
float z;

if((x==1)||(x==0))
	return false;
while(i>1){
  z =  (float)x / (float)i;
  c = x / i;
  if(c == z)
    return false;
    i--;
}
return true;
}
 
int main(){
    int testy,liczba;
		cin>>testy;
    for(int i=0; i<testy; i++){
        cin>>liczba;
        if(lPierwsza(liczba))
         cout<<"TAK"<<endl;
        else
         cout<<"NIE"<<endl;
    }
}