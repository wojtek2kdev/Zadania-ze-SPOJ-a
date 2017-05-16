#include <iostream>
 
using namespace std;
 
int main(){
 
	int testy;
	int x,y;
		cin>>testy;
	for(int i=0; i<testy; i++){
		cin>>x>>y;
	switch(x%10){
		case 0:
			cout<<0<<endl; break;
		case 1:
			cout<<1<<endl; break;
		case 2:
			switch(y%4){
				case 1:
					cout<<2<<endl; break;
				case 2:
					cout<<4<<endl; break;
				case 3:
					cout<<8<<endl; break;
				case 0:
					cout<<6<<endl; break;
			}
		break;
		case 3:
			switch(y%4){
				case 1:
					cout<<3<<endl; break;
				case 2:
					cout<<9<<endl; break;
				case 3:
					cout<<7<<endl; break;
				case 0:
					cout<<1<<endl; break;
			}
        break;
		case 4:
			float zm;
			int c;
				c = (y%10)/2;
				zm = ((float)(y%10)/(float)2);
			if(c==zm)
				cout<<6<<endl;
			else
				cout<<4<<endl;
        break;
		case 5:
			cout<<5<<endl; break;
		case 6:
			cout<<6<<endl; break;
		case 7:
			switch(y%4){
				case 1:
					cout<<7<<endl; break;
				case 2:
					cout<<9<<endl; break;
				case 3:
					cout<<3<<endl; break;
				case 0:
					cout<<1<<endl; break;
			}
        break;
		case 8:
			switch(y%4){
				case 1:
					cout<<8<<endl; break;
				case 2:
					cout<<4<<endl; break;
				case 3:
					cout<<2<<endl; break;
				case 0:
					cout<<6<<endl; break;
			}
        break;
		case 9:
			float zm2;
			int c2;
				c2 = (y%10)/2;
				zm2 = ((float)(y%10)/(float)2);
			if(c2==zm2)
				cout<<1<<endl;
			else
				cout<<9<<endl;
        break;
	}
 
}

return 0;

}