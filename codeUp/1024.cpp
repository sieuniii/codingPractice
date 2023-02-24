#include <iostream>
#include <string>

using namespace std;

int main(){
    string data;
    cin>>data;
    for(int i=0; i<data.length(); i++){
        cout<<"\'"<<data[i]<<"\'"<<endl;
    }
}
