#include <iostream>
 
using namespace std;
 
int main(){
int *tab = new int [10];
int ile,num,iter=-1;
char choose;
while(cin>>choose){
    if(choose == '+'){
        cin>>num;
        if(iter < 9){
        iter++;
        tab[iter] = num;
        cout<<":)"<<endl;
        }else{
        cout<<":("<<endl;
        }
    }else if(choose == '-'){
     if(iter >= 0){
     cout<<tab[iter]<<endl;
     iter--;
     }else{
      cout<<":("<<endl;
     }
    }
}
}