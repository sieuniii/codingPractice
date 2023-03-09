#include <iostream>

using namespace std;

int main(){
    int M, N;
    int min;
    int sum=0;
    int count =0;

    cin>>M;
    cin>>N;

    for(int i=M; i<=N; i++){
        for(int j=1; j<=i; j++){
            if(i%j==0) count++;
        }
        if(count ==2){
            if(sum ==0)
                min = i;
            sum += i;
        }
        count =0;
    }

    if(sum == 0)
        cout<<-1;
    else
        cout<<sum<<"\n"<<min;
}