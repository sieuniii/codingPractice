#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,x,y;
    cin>>n;
    int data[19][19] = {};
    for(int i=0; i<n; i++){
        cin>>x>>y;
        data[x-1][y-1]=1;
    }

    for(int i=0; i<19; i++){
        for(int j=0; j<19; j++){
            cout<<data[i][j]<<" ";
        }
        cout<<"\n";
    }
}