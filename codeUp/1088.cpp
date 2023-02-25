#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int data, i=1;
    cin>>data;
    while(i<=data){
       if(i%3 !=0)
            cout<<i<< " ";
        i++;
    }

}
