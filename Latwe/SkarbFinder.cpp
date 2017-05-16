#include <iostream>
 
using namespace std;
 
int main(){
	
short zestawy, ile;
int n=0,s=0,e=0,w=0, kierunek, kroki;
	cin>>zestawy;
for(int i=0; i<zestawy; i++){
	cin>>ile;
for(int l=0; l<ile; l++){
	cin>>kierunek>>kroki;
	switch(kierunek){
		case 0:
			if(s==0)
				n+=kroki;
			else
				s-=kroki;
			if(s<0){
				n+=s*-1;
				s = 0;
			}
    break;
		case 1:
			if(n==0)
				s+=kroki;
			else
				n-=kroki;
			if(n<0){
				s+=n*-1;
				n = 0;
			}
    break;
		case 2:
			if(e==0)
				w+=kroki;
			else
				e-=kroki;
			if(e<0){
				w+=e*-1;
				e = 0;
			}
    break;
		case 3:
			if(w==0)
				e+=kroki;
			else
				w-=kroki;
			if(w<0){
				e+=w*-1;
				w = 0;
			}
    break;
	}
}
	if(n==0&&(s==0)&&(e==0)&&(w==0))
		cout<<"studnia"<<endl;
	else{
		if(n>s)
			cout<<0<<" "<<n<<endl;
		else if(s>n)
			cout<<1<<" "<<s<<endl;
		if(w>e)
			cout<<2<<" "<<w<<endl;
		else if(e>w)
			cout<<3<<" "<<e<<endl;
	}
	n = 0;
	s = 0;
	w = 0;
	e = 0;
}

return 0;

}