#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,k,min;
    cin>>n;
    int data[n];
    for (int i=0; i<n; i++){
        cin>>data[i];
    }
    cout<< *min_element(data,data+n);
}

/*
#include <algorithm> : 
알고리즘과 관련된 여러 라이브러리가 저장되어 있음
min_element, max_element : 
배열의 첫 주소와 마지막 주소를 참조해서 가장 크고 작은 값을 주소 값으로 
return 해준다. 
*/