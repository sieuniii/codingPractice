#include <iostream>

using namespace std;

int main(){

    int N;
    int count = 0, find = 0;
    
    cin>>N;

    int data[N];

    for(int i=0; i<N; i++){
        cin>>data[i];
    }

    for(int i=0; i<N; i++){
        for(int j=1; j<=data[i]; j++){
            if(data[i]%j ==0)
                count++;
        }
        if(count ==2) 
            find ++;
        count = 0;
    }
    cout<<find;
}