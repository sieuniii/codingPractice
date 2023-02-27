
#include <iostream>
#include <string>
using namespace std;

int main()
{   

    int n;
    cin>>n;

    int r[n];
    string s[n];

    for(int i=0; i<n; i++){
        cin>>r[i]>>s[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<s[i].length(); j++){
            for(int k=0; k<r[i]; k++){
                cout<<s[i][j];
            }
        }
        cout<<"\n";
    }
}

