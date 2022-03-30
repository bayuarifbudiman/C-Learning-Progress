#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int max_val = 0;

    /*
        First option we can use vector instead of using if statement
    */
   
    // define vector variable
    vector<int> arr;
    // append or insert value into the vector
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    arr.push_back(d);
    // iterate the vector and check the condition
    for(int x = 0; x < arr.size(); x++){
        if (max_val <arr[x]){
            max_val = arr[x];
        }
    }

    /*
        Second Option we can use if statement
    */

    // Check the condition and change the max_value until the end of the if statement
    // if(max_val < a){
    //     max_val = a;
    // }
    // if (max_val < b){
    //     max_val = b;
    // }
    // if (max_val < c){
    //     max_val = c;
    // }
    // if (max_val < d){
    //     max_val = d;
    // }
    
    // return the max_val 
    return max_val;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
