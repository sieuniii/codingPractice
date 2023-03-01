#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;

//위에 삼각형
    for(int i=1; i<=N; i++){
        for(int j=N-1; j>i-1; j--){
            cout<<" ";
        }
        for(int j=0; j<i*2-1; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
//밑에 삼각형
    for(int i=0; i<N-1; i++){
        for(int j=0; j<=i; j++){
            cout<<" ";
        }
        for(int j=0; j<((N-1-i)*2)-1; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}