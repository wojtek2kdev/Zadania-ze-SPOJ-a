#include <iostream>
#include <math.h>
 
using namespace std;
 
int main(){
 
float ile_pudelek=0;
int testy, obrzartuchy, ile_zje=0, ile_czasu, w_pudelku;
	cin>>testy;
for(int i=0; i<testy; i++){
	cin>>obrzartuchy>>w_pudelku;
for(int l=0; l<obrzartuchy; l++){
   cin>>ile_czasu;
   ile_zje=(24*60*60)/ile_czasu;
   ile_pudelek += (float)ile_zje/(float)w_pudelku;
}
 
cout<<ceil(ile_pudelek)<<endl;
ile_zje=0;
ile_pudelek=0;
}
 
 
}