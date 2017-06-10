#include <iostream>
 
using namespace std;
 
void showPass(char *x){
for(short i=0; i<20; i++){
cout<<(char)(((x[i+1] - 65) * 16) + (x[i] - 65));
i++;
}
}
 
int main()
{
    char *x;
    x = new char[20];
    while(cin>>x){
        showPass(x);
        cout<<endl;
    }
    return 0;
}