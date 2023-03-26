////my solution
// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main(){
//     int N;
//     cin>>N;
//     cin.tie(NULL);

//     int a[N];

//     for(int i=0; i<N; i++){
//         cin>>a[i];
//     }

//     sort(a,a+N);

//     for(int i=0; i<N; i++){
//         if(i!=0 && a[i]!=a[i-1])
//             cout<<a[i]<<"\n";
//         else if(i==0){
//             cout<<a[i]<<"\n";
//         }
//     }

    
// }

// //bubble sort
// #include <iostream>

// using namespace std;

// int main(){
//     cin.tie(NULL);
//     int N;
//     int temp=0;
//     cin>>N;

//     int a[N];
//     for(int i=0; i<N; i++){
//         cin>>a[i];
//     }



//     for(int i=0; i<N; i++){
//         for(int j=0; j<N-i-1; j++){
//             if(a[j]>a[j+1]){
//                 temp = a[j+1];
//                 a[j+1] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }

//     for(int i=0; i<N; i++){
//         if( i==0) 
//             cout<<a[i]<<"\n";
//         else if(a[i]!=a[i-1])
//             cout<<a[i]<<"\n";
        
//     }

// }

//insertion sort
#include <iostream>

using namespace std;

int main(){
    cin.tie(NULL);
    int N,temp,key;
    cin>>N;
    int a[N];

    for(int i=0; i<N; i++){
        cin>>a[i];
    }

    for(int i=1; i<N; i++){
        key = a[i];
        cout << "key is " << key <<"\n";
        for(int j=i-1; j>=0; j--){
            if(key<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        for(int  j=0; j<N; j++){
            cout<<a[j]<<' ';
        }
        cout<<"\n\n";
    }

    for(int i=0; i<N; i++){
        if( i==0) 
            cout<<a[i]<<"\n";
        else if(a[i]!=a[i-1])
            cout<<a[i]<<"\n";
        
    }
}
