#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int data[19][19] = {};
    for(int i= 0; i<19; i++){
        for (int j=0; j<19; j++){
            cin>>data[i][j];
        }
    }
    int n,x,y;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        x--;
        y--;
        for(int j=0; j<19; j++){
            data[x][j] = !data[x][j];
            data[j][y] = !data[j][y];
            // if(data[x][j]==0) data[x][j]=1;
            // else data[x][j]=0;
            // if(data[j][y]==0) data[j][y]=1;
            // else data[j][y]=0;
        }

    }
    for(int i= 0; i<19; i++){
        for (int j=0; j<19; j++){
            cout<<data[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}

/*

not이랑 ~ 차이?
not : 논리 연산자
~ : 비트 연산자
*/