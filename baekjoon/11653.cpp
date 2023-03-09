#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    int answer[99999] = {0,};
    int a=1,b=1;
    cin>>N;

    while(1){
        if(N == 1)
            break;
        for (int i=2; i<=N; i++){
            if(N%i ==0){
                cout<<i<<endl;
                N=N/i;
                break;
            }
    }
        
    }



 
    
}