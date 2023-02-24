#include <iostream>
#include <string>

using namespace std;

int main(){

    string data;
    getline(cin,data);
    cout<<data;
}

/*
getline (cin,data,'\n') = cin.getline(data,1000,'\n')
*/