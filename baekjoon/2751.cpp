#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin>>N;
    long long x[N];
    long long temp;

    for(int i=0; i<N; i++){
        cin>>x[i];
    }

    sort(x,x+N);

    for(int i=0; i<N; i++){
        cout<<x[i]<<"\n";
    }

}