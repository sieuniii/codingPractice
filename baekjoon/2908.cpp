
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{   

    string a,b;
    int A,B;
    cin>>a>>b;

    for(int i=0; i<3; i++){
        swap(a[0],a[2]);
        swap(b[0],b[2]);
    }
    A= stoi(a);
    B= stoi(b);

    cout<< ((A>B) ?A:B);

}

