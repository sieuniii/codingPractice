#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float w,h,b;
    cin>>w>>h>>b;
    cout<<fixed<<setprecision(2)<<(((w*h*b/8))/1024)/1024<<" MB";
}
