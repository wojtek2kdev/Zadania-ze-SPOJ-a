#include <iostream>
 
using namespace std;
 
int main()
{
int t;
float x;
float y;
float ile_1;
float ile_2;
float ile_3;
float ile_4;
 
cin>>t;
while(t--){
cin>>x;
cin>>y;
 
ile_1 = 1*(y/x);
ile_2 = x*(y/x);
ile_3 = ile_1+1;
 
ile_4 = 2*(y/ile_3);
cout<<ile_4<<endl;
 
}
 
 
    return 0;
} 