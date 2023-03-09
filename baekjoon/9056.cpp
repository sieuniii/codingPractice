#include <iostream>

using namespace std;

int main(){

    int n;
    int sum=0, count = 0;
    while(1){
        cin>>n;
        if(n==-1)   break;

        for(int i=1; i<n; i++){
            if(n%i==0){
                count++;
                sum += i;
            }
                
        }

        if(sum == n){
            cout<<n << " = ";
            for(int i=1; i<n; i++){
                if(n%i==0 && count != 1){
                    cout<<i<<" + ";
                    count --;
                }
                else if(n%i ==0 && count ==1){
                    cout << i;
                }
                
                    
            }
            cout<<"\n";
        }

        else
            cout <<n<<" is NOT perfect.\n";
        
        sum = 0;
        count =0;

    }
}