#include <bits/stdc++.h>
#include <sstream>
#include <regex>


// hackerank link https://www.hackerrank.com/challenges/extra-long-factorials/

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'extraLongFactorials' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

// void extraLongFactorials(int n) {
//     long double factorial = 1;
//     for(int x = n; x > 0; x--){
//         factorial = factorial * x;
//     }

//     string s = to_string(factorial);
//     regex r("[.](.+?)+");
//     string result;
//     regex_replace(back_inserter(result), s.begin(), s.end(),
//                   r,  "");
//     cout << result;
// }

/* recursive function*/

long double factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // using simple algorithm
    // extraLongFactorials(n);
    
    // using recursive function
    long double asd = factorial(n);
    string s = to_string(asd);
    regex r("[.](.+?)+");
    string result;
    regex_replace(back_inserter(result), s.begin(), s.end(),
                  r,  "");
    cout << result;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
