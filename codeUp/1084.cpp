#include <iostream>

using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            for(int k=0; k<z; k++){
                cout<<i<<" "<<j<<" "<<k<<"\n";
            }
        }
    }
    cout<<x*y*z;
}

/*
endl 보다 '\n' 이 시간이 적게 든다
*/