#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int h,w,n,l,d,x,y;
    cin>>h>>w;
    int data[h][w];

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            data[i][j]=0;
        }
    }

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>l>>d>>x>>y;
        for(int j=0; j<l; j++){
            if(d==0){
                //가로
                data[x-1][y+j-1]= 1;
            }
            else {
                //세로
                data[x+j-1][y-1]= 1;
            }
        }
    }

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cout<<data[i][j]<<" ";
        }
        cout<<"\n";
    }
}
