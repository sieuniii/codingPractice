/*인터넷 알고리즘 검색*/

#include <iostream>

using namespace std;

int main(){
    int map[100][100]={0,};
    int num, x,y ,cnt = 0;

    cin>>num;
    
    for(int i=0; i<num; i++){
        cin>>x>>y;
        for(int j=y; j<y+10; j++){
            for(int k=x; k<x+10; k++){
                if(map[j][k]==0){
                    cnt++;
                    map[j][k]=1;
                }
            }
        }
    }
    cout<<cnt<<endl;


}