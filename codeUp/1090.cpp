#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long a,r,n ;
    cin>>a>>r>>n;

    for(int i=1; i<n; i++){
        a *= r;
    }

    cout<<a;
}