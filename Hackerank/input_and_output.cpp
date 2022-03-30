#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // define variable and type
    int a, b, c;
    
    // set variable input using cin
    cin >> a >> b >> c;
    // debug output using cout
    cout << a + b + c;
    
    // another option for debug is using printf instead of cout
    // printf("%d",a+b+c);
    
    // we have to return 0 or anything atleast it's integer type, because it is 
    // int main() function which is required to return something with integer type
    return 0;
}