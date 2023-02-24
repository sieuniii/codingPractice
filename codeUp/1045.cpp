#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    unsigned int a,b;
    cin>>a>>b;
    cout<< a+b<<endl;
    cout<< a-b<<endl;
    cout<< a*b<<endl;
    cout<< a/b<<endl;
    cout<< a%b<<endl;
    cout<<fixed<<setprecision(2)<<float(a)/float(b);
}
