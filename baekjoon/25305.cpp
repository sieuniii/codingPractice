#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    int k;

    cin>>N>>k;

    int x[N];

    for(int i=0; i<N; i++){
        cin>>x[i];
    }
    sort(x,x+N);

    cout<<x[N-k];

}