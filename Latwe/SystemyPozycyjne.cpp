#include <iostream>
 
using namespace std;
 
char itc(int x){
switch(x){
case 0: return '0';
case 1: return '1';
case 2: return '2';
case 3: return '3';
case 4: return '4';
case 5: return '5';
case 6: return '6';
case 7: return '7';
case 8: return '8';
case 9: return '9';
}
}
 
string hex(int x){
string a,b;
while(x>0){
if(x%16>9)
switch(x%16){
case 10: a.push_back('A'); break;
case 11: a.push_back('B'); break;
case 12: a.push_back('C'); break;
case 13: a.push_back('D'); break;
case 14: a.push_back('E'); break;
case 15: a.push_back('F'); break;
}
else
a.push_back(itc(x%16));
x/=16;
}
for(int i=a.size()-1; i>=0; i--){
   b.push_back(a[i]);
}
return b;
}
 
string jed(int x){
string a,b;
while(x>0){
if(x%11>9)
a.push_back('A');
else
a.push_back(itc(x%11));
x/=11;
}
for(int i=a.size()-1; i>=0; i--){
   b.push_back(a[i]);
}
return b;
}
 
int main()
{
short t;
int l;
cin>>t;
while(t--){
   cin>>l;
   cout<<hex(l)<<" "<<jed(l)<<endl;
}
}