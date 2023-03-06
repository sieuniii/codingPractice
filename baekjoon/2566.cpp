#include <iostream>

using namespace std;

int main(){
    int data[9][9];
    int max = 0, maxX=0, maxY=0;

    for(int i=0; i<9;i++){
        for(int j=0; j<9; j++){
            cin>>data[i][j];
            if(data[i][j]>max){
                max = data[i][j];
                maxX = i;
                maxY = j;
            }
        }
    }
    cout<<max<<"\n"<<maxX+1<<" "<<maxY+1;
}
