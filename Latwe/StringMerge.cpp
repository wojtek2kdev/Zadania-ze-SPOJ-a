#include <iostream>
 
using namespace std;
 
int main(){
 
int wielkosc,x,y=0;
char *litera;
string tekst1, tekst2, napis;
	cin>>x;
for(int i=0; i<x; i++){
	cin>>tekst1>>tekst2;
	if(tekst1.size() > tekst2.size())
		wielkosc = tekst2.size() * 2;
	else if(tekst2.size() > tekst1.size())
		wielkosc = tekst1.size() *2;
	else
		wielkosc = tekst1.size() + tekst2.size();
	litera = new char[wielkosc];
for(int l=0; l<wielkosc; l++){
    litera[l] = tekst1[y];
    napis.push_back(litera[l]);
    l++;
    litera[l] = tekst2[y];
    napis.push_back(litera[l]);
    y++;
}
cout<<napis<<endl;
napis.clear();
y=0;
}

return 0;

} 