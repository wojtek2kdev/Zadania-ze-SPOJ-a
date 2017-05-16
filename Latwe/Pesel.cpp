#include <iostream>
 
using namespace std;
 
int chartoint(char a){
 switch(a){
  case '0': return 0;
  case '1': return 1;
  case '2': return 2;
  case '3': return 3;
  case '4': return 4;
  case '5': return 5;
  case '6': return 6;
  case '7': return 7;
  case '8': return 8;
  case '9': return 9;
 }
}
 
int main()
{
short t;
cin>>t;
while(t--){
 string liczba;
 cin>>liczba;
 int x=0;
 for(int i=0; i<liczba.size(); i++){
  int y = chartoint(liczba[i]);
  switch(i){
      case 0: x+=y; break;
      case 1: x+=y*3; break;
      case 2: x+=y*7; break;
      case 3: x+=y*9; break;
      case 4: x+=y; break;
      case 5: x+=y*3; break;
      case 6: x+=y*7; break;
      case 7: x+=y*9; break;
      case 8: x+=y; break;
      case 9: x+=y*3; break;
      case 10: x+=y; break;
  }
 }
 
 if(x%10==0)
  cout<<"D"<<endl;
 else
  cout<<"N"<<endl;
  
}
}
 