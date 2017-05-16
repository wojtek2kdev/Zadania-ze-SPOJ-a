#include <iostream>
 
using namespace std;
 
int main(){
	
int x,ile;
string z;
	cin>>x;
	string *y = new string[x];
for(int i=0; i<x; i++){
	cin>>z;
	y[i] = z;
	ile = 1;
  for(int l=1; l<=y[i].size(); l++){
    if(y[i][l]==y[i][l-1]){
        ile++;
    }else{
      if(ile > 2)
        cout<<y[i][l-1]<<ile;
      else if(ile==2)
        cout<<y[i][l-2]<<y[i][l-1];
      else
        cout<<y[i][l-1];
      ile = 1;
    }
  }
  cout<<endl;
}

return 0;

}