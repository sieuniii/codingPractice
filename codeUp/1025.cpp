#include <iostream>
#include <string>

using namespace std;

int main(){
    int data, temp;
    while(1){
        cin>>data;
        if(data>=10000 & data<=99999)
            break;
    }

    for (int i=10000; i>1; i/=10){
        temp = data%i;
        data = data - temp;
        cout<<"["<<data<<"]"<<endl;
        data = temp;
    }
    cout<<"["<<data<<"]"<<endl;
}

/*
#include <iostream>
using namespace std;
int main(){
    int a,s,d,f,g;
    scanf("%1d%1d%1d%1d%1d",&a,&s,&d,&f,&g);
    printf("[%d0000]\n[%d000]\n[%d00]\n[%d0]\n[%d]\n",a,s,d,f,g);

}
*/
