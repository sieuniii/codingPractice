#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    cout<< a+b+c<<endl;
    cout<<fixed<<setprecision(1)<<(float(a)+float(b)+float(c))/3;
}
