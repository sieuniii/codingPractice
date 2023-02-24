#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int year,month,day;
    scanf("%d.%d.%d",&year,&month,&day);
    printf("%04d.%02d.%02d",year,month,day);
}

/*
using cin cout

#include<iostream>
using namespace std;

int main() {
	int y, m, d;
	cin >> y;
	cin.ignore(256, '.');
	cin >> m;
	cin.ignore(256, '.');
	cin >> d;

	cout.width(4); cout.fill('0');
	cout << y << ".";
    
	cout.width(2); cout.fill('0'); 
	cout << m << ".";
    
	cout.width(2); cout.fill('0');
	cout << d << endl;
}
*/