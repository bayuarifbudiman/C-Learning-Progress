#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* Hackerank link https://www.hackerrank.com/challenges/arrays-introduction */
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    /* define leng_arr and arr variable */
    int leng_arr;
    vector<int> arr;

    /* set variable input using cin */
    cin >> leng_arr;
    
    /* itterate and append or insert the
     array value to the array from cin input */
    for(int x = 0; x<leng_arr;x++){
        int new_var;
        cin >> new_var;
        arr.push_back(new_var);
    }

    /* reverse order the array by using this algorithm */
    for(int y = leng_arr-1; 0<=y; y--){
        cout << arr[y] << " ";
    }    
    return 0;
}
