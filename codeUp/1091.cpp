#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long a,m,d,n;
    cin>>a>>m>>d>>n;
    for (int i=1 ; i<n; i++){
        a = a*m +d;
        cout<< "a : "<<a<<endl;
    }
    cout<<a;

}