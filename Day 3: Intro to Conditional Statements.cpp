#include <iostream>
#include<cmath>
#include <string>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
#include<iomanip>
#include<assert.h>
#include<vector>
#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>
using namespace std ; 
int main() 
{
int num ; 
cin >> num ; 
if (num%2 !=0) 
    cout << "Weird" << endl ;
else if (num >=2 && num <=5) 
    cout <<"Not Weird" << endl ;
else if (num>=6 && num<=20)
    cout <<"Weird" <<endl ;
else if (num >20)
    cout << "Not Weird" << endl ;
}
