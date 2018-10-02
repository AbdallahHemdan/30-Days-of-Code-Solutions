#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {

int i = 4;
double d = 4.0;
string s = "HackerRank ";

int j ; 
double k  ; 
string h ;   

cin >> j >> k ;
getline(cin>> ws , h) ; 
cout << j+4 << endl ;
cout << fixed << setprecision(1) << k+4.0 << endl;
cout << s+h << endl; 
return 0;
}
