#include <iostream>
#include <cstdlib>
 
using namespace std;
 
void sort(short *a, short *b, short i){
for(int x=0; x<i; x++){
   for(int y=x; y<i; y++){
    short buf1, buf2;
    if(abs(a[y]- b[y]) < abs(a[x]-b[x])){
        buf1 = a[x];
        buf2 = b[x];
        a[x] = a[y];
        b[x] = b[y];
        a[y] = buf1;
        b[y] = buf2;
    }
    }
}
   for(int y=0; y<i-1; y++){
    short buf1, buf2;
    if(a[y] > a[y+1] | b[y] > b[y+1]){
        buf1 = a[y];
        buf2 = b[y];
        a[y] = a[y+1];
        b[y] = b[y+1];
        a[y+1] = buf1;
        b[y+1] = buf2;
    }
    }
}
 
int main(){
short i, a, b, *a1, *b1;
cin>>i>>a>>b;
a1 = new short[i];
b1 = new short[i];
for(short x=0; x<i; x++){
    cin>>a1[x]>>b1[x];
}
sort(a1,b1,i);
short n1 = 0, a2=0, b2=0;
for(short x=0; x<i; x++){
    if(a2+a1[x]<=a & b2+b1[x]<=b){
    a2+=a1[x];
    b2+=b1[x];
    n1++;
    }
}
cout<<n1;
} 