#include <iostream>
#include <vector>

using namespace std;

void sortTeam(vector<short> &t){
short buffor;
for(short i=0; i<2; i++){
    for(short l=i; l<3; l++){
        if(t[l] < t[i]){
            buffor = t[i];
            t[i] = t[l];
            t[l] = buffor;
        }
    }
}
}

int main()
{
short t = 1;
while(t--){
 short students;
 cin>>students;
 short** tab = new short*[students];
for(short i = 0; i < students; ++i)
    tab[i] = new short[students];
 for(short i=0; i<students; i++){
  for(short l=0; l<students; l++){
      cin>>tab[i][l];
  }
 }

 bool **checked = new bool*[students*students];
 for(short i = 0; i < students; ++i)
    checked[i] = new bool[students];
 short** whoKnowsWho = new short*[students];
for(short i = 0; i < students; ++i)
    whoKnowsWho[i] = new short[students];

    short groups = 0;

  for(short i=0; i<students; i++){
  for(short l=0; l<students; l++){
        if(!checked[i][l]){
        if(tab[i][l] == 1){
            checked[i][l] = true;
            whoKnowsWho[i][l] = 1;
            for(short n=0; n<students; n++){
               if(tab[i][n] == 1 & n != l){
                    for(short x=1; x<=(students/2)-i; x++){
                checked[i + (students - x*(i+1))][n] = true;
                whoKnowsWho[i+(students - x*(i+1))][n] = 0;
                    }
               }
            }
            groups++;
        }else{
            whoKnowsWho[i][l] = 0;
        }
        }
  }
 }
 int x=0;
 bool canSplit = true;
 vector<short>friends;
for(short y=0; y<groups; y++){
short f = 0;
for(short z=0; z<students; z++){
   if(whoKnowsWho[y][z] == 1) f++;
}
if(f > students/2){
    cout<<"NIE"; canSplit = false; break;
}
    friends.push_back(f);
}
if(canSplit){
vector<short>teams;
for(short i=0; i<3; i++){
    teams.push_back(friends[i]);
}
sortTeam(teams);
cout<<"TAK ";
for(short i=0; i<2; i++){
    cout<<teams[i]<<" ";
}
cout<<teams[2]<<endl;
}
}
}
