#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int year,month,date;
    scanf("%d.%d.%d",&year,&month,&date);
    printf("%02d-%02d-%4d",date,month,year);
}
