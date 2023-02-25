#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float h,b,c,s;
    cin>>h>>b>>c>>s;
    cout<<fixed<<setprecision(1)<<(((h*b*c*s/8))/1024)/1024<<" MB";
}
