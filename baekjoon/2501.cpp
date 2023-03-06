#include <iostream>
using namespace std;

int main(){
    int N, K;
    int num=1;
    cin>>N>>K;
    int data[N+1];
    for(int i=1; i<=N; i++){
        if(N%i==0){
            data[num]=i;
            num++;
        }    
    }

    if(K>num-1)
        cout<<0;
    else
       cout<<data[K];


}