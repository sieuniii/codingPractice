#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int data[10][10] = {};
    int x=1,y=1;

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cin>>data[i][j];
        }
    }

    while(1){
        if(data[x][y]==2){
            data[x][y]=9;
            break;
        }
        else if(data[x][y]==0){
            data[x][y]=9;
            y++;
        }
        else if(data[x][y]==1){
            x++;
            y--;
        }
        else{
            break;
        }
    }

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cout<<data[i][j]<<" ";
        }
        cout<<"\n";
    }
}
