#include <iostream>
#include <stdlib.h>

using namespace std;

void sortX(int *x, int s){
	
    for(int i=0; i<s-1; i++){
        int buffer;
            for(int l=i; l<s; l++){
                if(x[l]<x[i]){
                    buffer = x[i];
                    x[i] = x[l];
                    x[l] = buffer;
            }
        }
    }
	
}

int main(){

int mound, *x1, **distance;
    cin>>mound;
int *x = new int[mound];
int *y = new int[mound];

x1 = new int[mound];

for(int i=0; i<mound; i++){
    cin>>x[i]>>y[i];
}

sortX(x,mound);

distance = new int*[x[mound-1]];

for(int i=0; i<x[mound-1]; i++){
    distance[i]  = new int[mound];
}

for(int i=0; i<x[mound-1]; i++){
    for(int l=0; l<mound; l++){
		distance[i][l] = abs(x[l]-i) + abs(y[l]);
	}
}

int *ways = new int[mound];

for(int i=0; i<x[mound-1]; i++){
    int distanceAll = 0;
		for(int l=0; l<mound; l++){
			distanceAll += distance[i][l];
		}
	ways[i] = distanceAll;
}

int index=0, dist=ways[0];

for(int i=1; i<x[mound-1]; i++){
    if(ways[i]<dist){
		dist = ways[i];
		index = i;
    }
}

cout<<index<<" "<<dist;

}
