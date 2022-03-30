#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // define variable and type
    int a;
    long b;
    char c;
    float d;
    double e;
    
    // set variable input using cin
    cin >> a >> b >> c >> d >> e;

    // debug output using cout
    // endl is similar with "\n" to end the line of output debug
    // fixed method of stream manipulators in C++ is used to set the floatfield format flag for the specified str stream
    cout << fixed << a << endl << b << endl << c << endl << d << endl << e << endl;
    
    // we have to return 0 or anything atleast it's integer type, because it is 
    // int main() function which is required to return something with integer type
    return 0;
}
