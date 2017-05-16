#include <iostream>
#include <sstream>
#include <stdlib.h>
 
using namespace std;
 
bool palindrom(int x){
stringstream s;
s << x;
string liczba = s.str();
string liczbaprim;
for(int i=liczba.size()-1; i>=0; i--){
liczbaprim.push_back(liczba[i]);
}
for(int i=0; i<liczba.size(); i++){
if(liczba[i]!=liczbaprim[i])
    return false;
}
return true;
}
 
void funkcja(int x, int ile){
int i=ile;
if(palindrom(x)){
  cout<<x<<" "<<i<<endl;
}
else{
    i++;
    stringstream s;
    s << x;
    string liczba = s.str();
    string liczba2;
    for(int i=liczba.size()-1; i>=0; i--){
      liczba2.push_back(liczba[i]);
    }
    int y = atoi(liczba2.c_str());
    x+=y;
    funkcja(x, i);
}
}
 
int main(){
short testy;
int liczba;
cin>>testy;
for(int i=0; i<testy; i++){
cin>>liczba;
funkcja(liczba, 0);
}
}