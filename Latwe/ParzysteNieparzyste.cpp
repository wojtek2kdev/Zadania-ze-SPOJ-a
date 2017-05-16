#include <iostream>
 
using namespace std;
 
 
 
int main()
{
  short t,ile,*liczby;
  cin>>t;
  while(t--){
     cin>>ile;
     liczby = new short[ile];
     for(short i=0; i<ile; i++){
      cin>>liczby[i];   
     }
     short i=1;
     while(i<ile){
      cout<<liczby[i]<<" ";
      i+=2;
     }
     i=0;
     while(i<ile){
      cout<<liczby[i]<<" ";
      i+=2;
     }
     cout<<endl;
  }
} 