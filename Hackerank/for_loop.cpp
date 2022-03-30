#include <iostream>
#include <cstdio>
using namespace std;

/* Hackerank link https://www.hackerrank.com/challenges/c-tutorial-for-loop */
int main() {

    // define variable
    int a,b;

    // set variable input using cin
    cin >> a >> b;

    // itterate from a to b using for
    // and check for each condition using if statement
    // if x value below 9 print the number name
    // and if x value greater than 9 check the x value is it odd or even number
    for(int x = a; x<=b; x++){
        if(x == 1){
            cout << "one\n";
        } else if (x == 2) {
            cout << "two\n";
        } else if (x == 3) {
            cout << "three\n";
        } else if (x == 4){
            cout << "four\n";
        } else if (x == 5) {
            cout << "five\n";
        } else if (x == 6) {
            cout << "six\n";
        } else if (x == 7) {
            cout << "seven\n";
        } else if (x == 8) {
            cout << "eight\n";
        } else if (x == 9) {
            cout << "nine\n";
        } else {
            if (x%2 == 0){
                cout << "even\n";
            } else {
                cout << "odd\n";
            }
        }
    }
    return 0;
}